#include <iostream>
#include <vector>
#include <iomanip>  //for setbase;
#include <boost/type_index.hpp>

using namespace std;
using boost::typeindex::type_id_with_cvr;

//辅助类模板，用于打印T的类型
template <typename T>
void printType(string s)
{
    cout << s << " = " << type_id_with_cvr<T>().pretty_name() << endl;
}

//4. 用于测试nullptr并不是指针类型
template<typename T>
void func_ptr(T* t) {}

template<typename T>
void func_value(T t) {}

int main()
{
    //1. 查看nullptr的类型
    printType<decltype(nullptr)>("nullptr的类型: ");  //std::nullptr_t
    cout << "sizeof(nullptr) = " << sizeof(nullptr) << endl;

    //2. nullptr可以隐式转换为任何指针！
    void* vptr = nullptr;
    char* cptr = nullptr;

    //3. 使用关系运算符进行比较nullptr与nullptr_t类型的变量
    //3.1 nullptr支持关系运算
    nullptr_t my_nullptr = nullptr; //通过nullptr_t定义新的实例(vc下必须初始化，但g++默认下己初始化为nullptr)

    (nullptr == my_nullptr) ? (cout << "newptr == nullptr" << endl) : (cout << "newptr != nullptr" << endl);
    //(nullptr < my_nullptr) ? (cout << "newptr < nullptr" << endl) : (cout << "newptr !< nullptr" << endl);

    //3.2 nullptr不支持算术运算
    //nullptr += 1; //nullptr是个常量
    //nullptr * 5;

    //4. nullptr_t并不是指针类型（尽管看起来、用起来都像指针类型）
    func_ptr((float*)nullptr); //ok， T = float。nullptr可以转为任意类型的指针
    //func_ptr(nullptr);       //编译失败，nullptr的类型是nullptr_t，而不是指针类型
                               //编译器并不会“智能”地推导成某种类型的指针（含void*）

    func_value(0);           // T = int;
    func_value(nullptr);     //T = nullptr_t;
    func_value((float*)nullptr);  //T = float*

    return 0;
}
/*输出结果
nullptr的类型:  = std::nullptr_t
sizeof(nullptr) = 4
newptr == nullptr
newptr !< nullptr
*/