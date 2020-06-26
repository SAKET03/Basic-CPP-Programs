#include<iostream>
#include<conio.h>
 class A
 {
     int x;
     public:

     void input()
    {
        std::cout<<"Enter Any Value"<<std::endl;
        std::cin>>x;
    }
    void operator--()
    {
        x=--x;
        //std::cout<<x;

    }
    void dis()
    {
        std::cout<<x;
    }
 };

 int main()
 {
     A obj;
     obj.input();
     --obj;
     obj.dis();
 }
