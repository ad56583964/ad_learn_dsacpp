#include<iostream>



template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
    int a = 10;
    int b = 12;
    mySwap(a, b);
    std::cout << "a:" << a << " b:" << b;
}