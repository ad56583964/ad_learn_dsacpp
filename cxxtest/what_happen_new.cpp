#include "iostream"

int main(int argc, char const *argv[])
{
    int *a = nullptr;
    a = new int[4];
    for(int i = 0; i < 4; i++)
    {
        printf("%p\n",&a[i]);
    }
    a = new int[12];
    
    printf("\n\n");
    for(int i = 0; i < 12; i++)
    {
        printf("%p\n",&a[i]);
    }
    return 0;
}
