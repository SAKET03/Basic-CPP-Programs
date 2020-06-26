#include<iostream>
template<class T1, class T2>
class Myclass
{
    T1 x;
    T2 y;
public:
    Myclass( T1 a, T2 b);
    x=a;
    y=b;
    void dis()
{
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
}
};


int main()
{
  Myclass<int, float>obj(3, 5.6);
  obj.dis();
}

