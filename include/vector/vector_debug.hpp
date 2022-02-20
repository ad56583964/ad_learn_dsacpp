#pragma once

#include<iostream>

template <typename T>
void Vector<T>::showElems(){
    printf("\nElems:");
    for(Rank i = 0; i < _size; i++){
        printf("%d ",_elem[i]);
    }
    printf("\n");
}