#include <iostream>

using Rank = int; //秩??

#define DEFAULT_CAPACITY 3

template <typename T> class Vector {

public:
    Rank _size; //大小
    int _capacity;  //容量
    // T* _elem; //是一个指针，空的？？？
    T* _elem = nullptr;
    // 构造函数
    Vector ( int c = DEFAULT_CAPACITY, int s = 0, T v = 0 ){
        _elem = new T[_capacity = c]; //https://cplusplus.com/doc/tutorial/dynamic/
        for ( _size = 0; _size < s; _elem[_size++] = v ); 
    }

    void copyFrom ( T const* A, Rank lo, Rank hi ) {
        _elem = new T[ _capacity = 2 * ( hi - lo ) ];  //new??
        for (_size = 0; lo < hi; _size++, lo++ )
            _elem[ _size ] = A[ lo ];
    }

    

};

using namespace std;

int main()
{

    int* test = nullptr;
    cout << test << endl;
}