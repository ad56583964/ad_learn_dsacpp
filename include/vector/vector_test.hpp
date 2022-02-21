#pragma once

#include <algorithm>

template <typename T>
void permute(Vector<T>& V){ //??
    for(int i = V.size(); i > 0; i--){
        std::swap(V[i-1], V[rand()%i]);
    }
}