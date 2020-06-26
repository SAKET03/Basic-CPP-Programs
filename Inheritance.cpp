#include<iostream>
#include<conio.h>
class A
{
    public:
    int n1, n2, sum1, sum2;
    void input()
{
std::cout<<std::endl<<"Enter First Number=";
std::cin>>n1;
std::cout<<std::endl<<"Enter Second Number=";
std::cin>>n2;
}
};
class B: public A
{
public:
    int n3, n4;
    void process()
{
std::cout<<std::endl<<"Enter Third Number=";
std::cin>>n3;
std::cout<<std::endl<<"Enter Fourth Number=";
std::cin>>n4;
}
};

class C: public A
{
    public:
    void output()
{
sum1=(n1+n2);
std::cout<<sum1<<std::endl;
}
};

class D: public B
{
    public:
    void screen()
{
sum2=(n3+n4);
std::cout<<sum2<<std::endl;
}
};
int main()
{
C s;
D f;
s.input();
f.process();
s.output();
f.screen();
    getch();
    return 0;
}
