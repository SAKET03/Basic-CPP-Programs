#include<iostream>
#include<conio.h>
class A
{
    char name[20];
    int id;
    public:
    friend void dis(A &m);
};
 void dis(A &m)
 {

     std::cout<<"\nEnter ID";
     std::cin>> m.id;
     std::cout<<"\nEnter Name";
     std::cin>> m.name;
     std::cout<<std::endl<<m.id<<std::endl<<m.name;
 }

 int main()
 {
     A obj;
     dis(obj);
     getch();
 }
