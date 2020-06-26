#include<iostream>
#include<conio.h>
 class My
 {
     int x,y;
     public:
     My(int a, int b)
     {
         this->x=a;
         this->y=b;
     }

     void get()
    {
        std::cout<<x<<std::endl<<y<<std::endl;
    }
    void dis()
    {
        static int i=1;
        std::cout<<i<<std::endl;
        i++;
    }
 };

 int main()
 {
     My obj(2,3);
     obj.get();
     obj.dis();
     getch();
 }
