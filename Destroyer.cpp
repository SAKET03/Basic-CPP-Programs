#include<iostream>
#include<conio.h>
class Test
{
    int *p, old;
    public:
    Test()
{
  p= new int;
std::cout<<"Object Created"<<std::endl;
}
~Test()
{
    delete p;
    std::cout<<std::endl<<"Object Destroyed";
}
};

int main()
{
Test a;
    getch();
    return 0;
}

