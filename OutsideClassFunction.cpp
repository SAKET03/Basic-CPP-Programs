#include<iostream>
#include<conio.h>
class student
{
    int r_no, age;
    char name[20], batch[20];
public:
    void accept_data();
    void display_data();
};
void student::accept_data()
{
std::cout<<std::endl<<"Enter Roll .No=";
std::cin>>r_no;
std::cout<<std::endl<<"Enter Name=";
std::cin>>name;
std::cout<<std::endl<<"Enter Age=";
std::cin>>age;
std::cout<<std::endl<<"Enter Batch=";
std::cin>>batch;
}
void student::display_data()
{
    std::cout<<std::endl<<"Roll Number="<<r_no;
    std::cout<<std::endl<<"Name="<<name;
    std::cout<<std::endl<<"Age="<<age;
    std::cout<<std::endl<<"Batch="<batch;
}

int main()
{
    student s;
    s.accept_data();
    s.display_data();
    getch();
    return 0;
}

