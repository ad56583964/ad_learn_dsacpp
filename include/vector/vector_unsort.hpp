

template <typename T>
void Vector<T>::unsort(){
    T* V = _elem; //create a reference start of unsort
    for(Rank i = _size; i > 0; i--){ // pay attention to "i-1"
        std::swap(V[i-1],V[rand()%i]); //一个一个置换？？
    } 
}

template <typename T>
void Vector<T>::unsort(Rank lo, Rank hi){
    T* V = _elem + lo; //create a reference start of unsort
    for(Rank i = hi - lo; i > 0; i--){ //why choose "V[]" a redirect array ?
        std::swap(V[i-1],V[rand()%i]); //一个一个置换？？
    } 
}