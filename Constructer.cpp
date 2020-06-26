#include<iostream>
#include<conio.h>
class employee
{
    int e_id;
    float salary;
    char name[20];
public:
    employee()
{
std::cout<<std::endl<<"Enter Employee ID=";
std::cin>>e_id;
std::cout<<std::endl<<"Enter Name=";
std::cin>>name;
std::cout<<std::endl<<"Enter Salary=";
std::cin>>salary;
}
void disp_data()
{
    std::cout<<std::endl<<"Roll Number="<<e_id;
    std::cout<<std::endl<<"Name="<<name;
    std::cout<<std::endl<<"Salary="<<salary;
}
};

int main()
{
    employee s;
    s.disp_data();
    getch();
    return 0;
}
