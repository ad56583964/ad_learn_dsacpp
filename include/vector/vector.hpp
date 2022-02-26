#pragma once

using Rank = int; //秩??
// #define DEBUG
#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
protected:
    Rank _size; //大小
    int _capacity;  //容量
    // T* _elem; //是一个指针，空的？？？
    T* _elem = nullptr;

public:
    void copyFrom ( T const* A, Rank lo, Rank hi ); //复制数组区间

    Vector ( int c = DEFAULT_CAPACITY, int s = 0, T v = 0 ){
        _elem = new T[_capacity = c]; //https://cplusplus.com/doc/tutorial/dynamic/
        for ( _size = 0; _size < s; _elem[_size++] = v );
    }

    Vector<T>& operator= ( Vector<T> const& V);
    
    T& operator[] (Rank r) const;

    void expand();

    Rank insert(Rank r, T const &e); // 插入位置，插入元素

    void unsort (Rank lo, Rank hi);
    void unsort ();

    T& remove(Rank r) const;
    
    int Vector<T>::remove(Rank lo, Rank hi);

    Rank size(){
        return _size;
    }

    //vector_debug
    void showElems();
};

#include <interface_vector.hpp>