using Rank = int; //秩??

template <typename T> class Vector {

public:
    Rank _size; //大小
    int _capacity;  //容量
    T* _elem; //数据

    //大小
    void copyFrom ( T const* A, Rank lo, Rank hi ) {
        _elem = new T[ _capacity = 2 * ( hi - lo ) ];  //new??
        for (_size = 0; lo < hi; _size++, lo++ )
            _elem[ _size ] = A[ lo ];
    }

};

int main()
{
    
}