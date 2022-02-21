#pragma once

template <typename T> 
T& Vector<T>::operator[] (Rank r) const{ //const behind the function < protect 类成员变量
    return _elem[r];
}