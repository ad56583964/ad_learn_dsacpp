#include <iostream>

using Rank = int; //秩??

#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
public:
    Rank _size; //大小
    int _capacity;  //容量
    // T* _elem; //是一个指针，空的？？？
    T* _elem = nullptr;

    void copyFrom ( T const* A, Rank lo, Rank hi ) { //以数组匙间A[lo, hi)为蓝本复刢向量
        _elem = new T[ _capacity = 2 * ( hi - lo ) ];  //new??
        _size = 0;
        while( lo < hi){
            _elem[_size++] = A[lo++]; //复制至_elem[0, hi - lo)
        }
        // for (_size = 0; lo < hi; _size++, lo++ )
        //     _elem[ _size ] = A[ lo ]; 

    }

        // 构造函数
    Vector ( int c = DEFAULT_CAPACITY, int s = 0, T v = 0 ){
        _elem = new T[_capacity = c]; //https://cplusplus.com/doc/tutorial/dynamic/
        for ( _size = 0; _size < s; _elem[_size++] = v ); 
    }

    // Vector ();

    

};

using namespace std;

int main()
{

    Vector<int> myvector;
    int A[4] = {3,3,3,3};

    myvector.copyFrom(A, 0, 4);//最后一个不算在里面

    for(int i = 0; i < myvector._size; i++)
    {
        printf("%d ",myvector._elem[i]);
    }
    printf("\n");
}