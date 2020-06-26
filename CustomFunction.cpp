#include<iostream>
#include<conio.h>
int main()
{
int m1, m2, m3, avg=0, h;
char name[20];
std::cout<<std::endl<<"Enter Your Name=";
std::cin>>name;
std::cout<<std::endl<<"Enter Marks in Maths=";
std::cin>>m1;
std::cout<<std::endl<<"Enter Marks in Science=";
std::cin>>m2;
std::cout<<std::endl<<"Enter Marks in Computer=";
std::cin>>m3;

avg= (m1+m2+m3)/3;

if(m1>m2)
{
    h=m1;
}
if(m2>m3)
{
    h=m2;
}
if(m3>m1)
{
    h=m3;
}
std::cout<<std::endl<<"Students Name="<<name;
std::cout<<std::endl<<"AVERAGE Marks="<<avg;
std::cout<<std::endl<<"HIGHEST Marks="<<h;

return 0;
}

