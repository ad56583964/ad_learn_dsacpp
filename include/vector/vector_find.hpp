template <typename T>
int Vector<T>::find(T const& e, Rank lo, Rank hi){
    Rank i = 0; //api  底层到一定程度 不要可读性要性能
    while((lo < hi--)&&(e!=_elem[hi]));//??都啥神奇写法...
    // if found break;
    // if "the end" break;
    // or hi-- continue to traverse
    return hi; //now Rank
}