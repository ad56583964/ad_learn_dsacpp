#include "iostream"

class haha
{
private:
    /* data */
public:

    int func2()
    {
        printf("func2()\n");   
        return 0;
    }

    int func1() const
    { 
        func2();
        return 0;
    }

};


int main(int argc, char const *argv[])
{
    haha myhaha;
    myhaha.func2();
    return 0;
}
