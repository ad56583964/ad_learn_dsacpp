#include <cstdio>
#include <iostream>

class test
{
    public:
    test()
    {
        printf("You have created this object\n");
    }
    /*为什么 operator 前面是类名？？ 
    用于返回与该类相同的对象用于实现 c = a + b*/
    int operator= (int a)
    {
        return a;
    }

};

int main(int, char**) {
    
    test mytest;
    int b = mytest = 4; //使用重载后的 = 
    printf("%d\n", b);

    return 0;
}
