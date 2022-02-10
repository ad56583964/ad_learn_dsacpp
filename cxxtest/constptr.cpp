#include<iostream>

int main(int argc, char const *argv[])
{
    int const& p = 233;
    int* a;
    a = new int(10);
    printf("%d\n",p);
    return 0;
}
