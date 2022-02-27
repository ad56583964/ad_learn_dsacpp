#include <iostream>

template <typename T> 
void Vector<T>::expand()
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

    for(int i = 0; i < _size; i++){
        _elem[i] = oldElem[i]; //??有点耗时额？？
    }
    fprintf(stderr,"NewCap: %d\n",_capacity);
    delete [] oldElem; //释放原先空间，
}