#pragma once

#include<iostream>

template <typename T> 
Rank Vector<T>::insert(Rank r, T const &e) // 插入位置，插入元素
{
    expand();

    if(r > _size){
        fprintf(stderr,"insert ERROR:out of elem\n");
        return 0;
    }

    //先搬移
    for(int i = _size; i > r; i--){
        _elem[i] = _elem[i-1];  //this one is important
    }
    _elem[r] = e;
    _size++;
    return r;
}