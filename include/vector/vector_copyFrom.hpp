#pragma once

template <typename T> 
void Vector<T>::copyFrom ( T const* A, Rank lo, Rank hi ) {
    _elem = new T[ _capacity = 2 * ( hi - lo ) ];  //new??
    _size = 0;
    while( lo < hi){
        _elem[_size++] = A[lo++]; //复制至_elem[0, hi - lo)
    }
}
/* 
template <typename T> 
Vector<T>::Vector ( int c, int s, T v){
    _elem = new T[_capacity = c];
    for ( _size = 0; _size < s; _elem[_size++] = v );
}

template <typename T> 
Vector<T> & Vector<T>::operator= ( Vector<T> const& V) { //重载
    if ( _elem ) delete [] _elem; //释放原有内容

    copyFrom ( V._elem, 0, V.size() ); //整体复制
    return *this;
}

template <typename T> 
T& Vector<T>::operator[] (Rank r) const{ //const behind the function < protect 类成员变量
    return _elem[r];
}

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

    for(int i = 0; i < _size; i++)
    {
        _elem[i] = oldElem[i]; //??有点耗时额？？
    }
    fprintf(stderr,"NewCap: %d\n",_capacity);
    delete [] oldElem; //释放原先空间，
}

template <typename T> 
T& Vector<T>::insert(Rank r, T const &e) // 插入位置，插入元素
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

template <typename T> 
T& Vector<T>::remove(Rank r) const
{
    //添加暂存功能
    T e = _elem[r];
    for(int i = _size; i > r; i--)
    {
        _elem[i-1] = _elem[i];
    }

    fprintf(stderr,"Removed: %d\n", e);
        
    return e;
}


template <typename T> 
void Vector<T>::unsort (Rank lo, Rank hi){
    T* V = _elem + lo; //一个指针??
    std::cout << V << std::endl; 
}

    // void ShowADDR(const char* name){
    //     printf("%s: %p\n",name,static_cast<void*>(this));
    //     // std::cout << this << std::endl;
    // }
template <typename T> 
void Vector<T>::showAll()
{
    printf("V: ");
    for(int i = 0; i < _size; i++)
    {
        printf("%d ",_elem[i]);
    }
    printf("\n");
    _size -= 1;
} */