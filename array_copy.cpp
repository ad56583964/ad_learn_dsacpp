#include <iostream>

using Rank = int; //秩??

#define DEFAULT_CAPACITY 3

// #define DEBUG 1;

template <typename T> class Vector {
private:
    Rank _size; //大小
    int _capacity;  //容量
    // T* _elem; //是一个指针，空的？？？
    T* _elem = nullptr;

public:
    void copyFrom ( T const* A, Rank lo, Rank hi ) { //复制数组区间
        _elem = new T[ _capacity = 2 * ( hi - lo ) ];  //new??
        _size = 0;
        while( lo < hi){
            _elem[_size++] = A[lo++]; //复制至_elem[0, hi - lo)
        }
    }

    Vector ( int c = DEFAULT_CAPACITY, int s = 0, T v = 0 ){
        _elem = new T[_capacity = c]; //https://cplusplus.com/doc/tutorial/dynamic/
        for ( _size = 0; _size < s; _elem[_size++] = v ); 

    }

    Vector<T> & operator= ( Vector<T> const& V) { //重载
        if ( _elem ) delete [] _elem; //释放原有内容

        copyFrom ( V._elem, 0, V.size() ); //整体复制
        return *this;
    }

    T& operator[] (Rank r) const{
        return _elem[r];
    }

    void expand()
    {
        // printf("oldCap: %d\n",_capacity);
        if( _size < _capacity){
            return; //退出程序
        }
        if( _capacity < DEFAULT_CAPACITY ){ //容量下限？？
            _capacity = DEFAULT_CAPACITY;
        }

        T* oldElem = _elem; //给予地址，指向原_elem
        _elem = new T[_capacity <<= 1]; //干了两件事/ 两倍扩容 / 容值更新

        for(int i = 0; i < _size; i++)
        {
            _elem[i] = oldElem[i]; //??有点耗时额？？
        }
        printf("NewCap: %d\n",_capacity);
        delete [] oldElem; //释放原先空间，
    }

    Rank insert(Rank r, T const &e) // 插入位置，插入元素
    {
        expand();

        //先搬移
        for(int i = _size; i > r; i--){
            _elem[i] = _elem[i-1];  
        }
        _elem[r] = e;
        _size++;

        return 0;
    }

    Rank remove(Rank r)
    {
        for(int i = _size; i > r; i--)
        {
            _elem[i-1] = _elem[i];
        }
        return 0;
    }

    void unsort (Rank lo, Rank hi){
        T* V = _elem + lo; //一个指针??
        std::cout << V << std::endl; 
    }

    // void ShowADDR(const char* name){
    //     printf("%s: %p\n",name,static_cast<void*>(this));
    //     // std::cout << this << std::endl;
    // }
    void showAll()
    {
        printf("V: ");
        for(int i = 0; i < _size; i++)
        {
            printf("%d ",_elem[i]);
        }
        _size -= 1;
    }

};



using namespace std;

int main()
{
    Vector<int> vector_A;
    // vector_A.insert(0,100);

    vector_A.insert(0,23);
    vector_A.insert(1,11);
    vector_A.insert(2,22);
    // vector_A.expand();

    // printf("%d\n",vector_A[2]);
    vector_A.showAll();
    vector_A.remove(2);
    vector_A.showAll();
}