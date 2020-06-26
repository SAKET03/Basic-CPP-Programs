#include<iostream>
#include<conio.h>   //OVERWRITTING//
class A
{
    public:
    int res;
    void op(int n)
{
    res= n*n;
std::cout<<std::endl<<"AREA="<<res;
}
};
class B: public A
{
    public:
    void op(int l)
{
    res= l*l*l;
std::cout<<std::endl<<"AREA="<<res;
}
};


int main()
{
B a1;//A//
a1.op(8);
a1.op(8);
getch();
return 0;
}

