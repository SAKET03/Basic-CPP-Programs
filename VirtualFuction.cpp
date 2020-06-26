#include<iostream>

class Myclass
{
public:
    int a,b,c;

    Myclass(int x, int y)
    {
        a=x;
        b=y;
    }
    virtual void my()
    {
        std::cout<<0;
    }
//    virtual void my()=0;
};

class add: public Myclass
{
public:
    add(int x , int y):  Myclass(x,y)
    {
    }
    void my()
  {
      c=a+b;
      std::cout<<c<<std::endl;
  }
};

int main()
{
    Myclass *obj;
    add obj2(3,4);
    obj= &obj2;
    obj-> my();
}

