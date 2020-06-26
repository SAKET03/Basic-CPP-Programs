#include<iostream>
#include<conio.h>   //OVERLOADING//
class A
{
    int res;
    public:
    void area(int n)
{
    res= n*n;
std::cout<<std::endl<<"AREA="<<res;
}
void area(int l, int b)
{
    res= l*b;
std::cout<<std::endl<<"AREA="<<res;
}
};

int main()
{
A a1;
a1.area(8);
a1.area(8,4);
getch();
return 0;
}
