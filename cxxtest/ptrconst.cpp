#include<iostream>

int main(int argc, char const *argv[])
{
    int haha = 10;
    int hehe = 20;
    int * const p = &haha;
    p = &hehe;
    printf("%d\n",*p);
    return 0;
}
