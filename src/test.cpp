#include "vector.hpp"

int main(int argc, char const *argv[])
{
    Vector<int> myvector;
    for(int i=0;i<10;i++){
        myvector.insert(i,i);
    }
    
    //insert 的位置？？
    myvector.showElems();
    permute(myvector);
    myvector.showElems();
    return 0;
}
