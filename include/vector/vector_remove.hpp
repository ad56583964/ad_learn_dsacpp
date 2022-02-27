#pragma once

//??
//opreate vector elements
//remove(r)
// remove the selected element and return the origin one
//so??
//return T type
template <typename T> //simple delete
T& Vector<T>::remove(Rank r){
    //should check sth??
    T elem_ch = _elem[r];
    for (Rank i = r; i < _size-1; i++){
        _elem[i] = _elem[i+1];//need test
    }
    //need resize
    _size = _size - 1;

    return elem_ch;
}

// template <typename T> //interval delete
// int Vector<T>::remove(Rank lo, Rank hi){// the subject to be remove without hi
//     Rank re_size = hi - lo;
//     for(Rank i = lo ; i < hi ; i++){
//         _elem[i] = _elem[i+(re_size)];
//     }
//     _size = _size - (re_size);
//     return re_size;
// }

template <typename T> //interval delete
int Vector<T>::remove(Rank lo, Rank hi){
    if(lo == hi) return 0;
    while(hi < _size){
        _elem[lo++] = _elem[hi++]; //"lo" is changing
    }//emm,把这个区间当成整体 可能比较好理解， 向右移动，bolobolo 就变成尾巴了
    _size = lo;// now 'lo' is the location of last/tail element
    return hi - lo;
}