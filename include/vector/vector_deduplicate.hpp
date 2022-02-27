template <typename T>
int Vector<T>::deduplicate(){
    int oldSize = _size;
    Rank i = 1; //start traverse
    while(i < _size){
        (find(_elem[i],0,i) < 0) ? i++ : remove(i);
        //冒号表达式的规则：
        //表达式1 ? 表达式2 : 表达式3若表达式1为真，则返回表达式2的值，若表达式1为假，则返回表达式3的值。
    }
    return oldSize - _size;
}