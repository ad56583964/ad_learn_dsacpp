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


    Vector<T> & operator= ( Vector<T> const& V) { //重载
        if ( _elem ) delete [] _elem; //释放原有内容
        this.copyFrom ( V._elem, 0, V.size() ); //整体复制
        return *this;
    }

    void unsort (Rank lo, Rank hi){
        T* V = _elem + lo; 一个指针??

    }

    // void ShowADDR(const char* name){
    //     printf("%s: %p\n",name,static_cast<void*>(this));
    //     // std::cout << this << std::endl;
    // }

};



using namespace std;

int main()
{
    Vector<int> vector_A;

    

}