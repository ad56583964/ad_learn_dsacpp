#pragma once

//??
//opreate vector elements
//remove(r)
// remove the selected element and return the origin one
//so??
//return T type
template <typename T>
T& Vector<T>::remove(Rank r) const{
    //should check sth??
    T elem_ch = _elem[r];
    for (Rank i = r; i < _size-1; i++)
    {
        _elem[i] = _elem[i+1];//need test
    }
    return elem_ch;
}

// template <typename T>
// Rank Vector<T>::remove(Rank lo, Rank hi){
//     Rank re_size = hi - lo;
//     for(Rank i = lo ; i < hi ; i++){
//         _elem[i] = _elem[i+(re_size+1)];
//     }
//     _size = _size - (re_size+1);
//     return re_size;
// }