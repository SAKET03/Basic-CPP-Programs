#include<iostream>
template<class T>
void add(T a, T b)
{
    T c;
    c=a+b;
    std::cout<<c<<std::endl;
}

int main()
{
    add(12,34);
}
