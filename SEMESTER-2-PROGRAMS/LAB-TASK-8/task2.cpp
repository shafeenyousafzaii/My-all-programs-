#include<iostream>
#include<string>
#include<iomanip>
#include"task2.h"
using namespace std;
EmployeeType::EmployeeType()
{
    name=" ";
}
void EmployeeType::set_name()
{
    cout<<"Enter Name"<<endl;
    cout<<endl;
    cin.ignore();

    getline(cin,name);
}
void EmployeeType::get_name()const
{
    cout<<endl;
    cout<<"Name :  ";
    cout<<name;
    cout<<endl;
}
void EmployeeType::cal_salary()
{

}
HourlyEmployeeType::HourlyEmployeeType()
{
        hourlyrate=0;
        NO_hour=0;
}
// void HourlyEmployeeType::set_name()
// {
//    set_name();
// }
void HourlyEmployeeType::get_name()const
{
    EmployeeType::get_name();
}
void HourlyEmployeeType::set_HR()
{
    cout<<"Enter hourlyrate"<<endl;
    cin>>hourlyrate;
}
void HourlyEmployeeType::get_HR()const
{
    cout<<"HourlyRate : "<<hourlyrate<<endl;
}
void HourlyEmployeeType::set_NOR()
{
    cout<<"Enter Number of hours"<<endl;
    cin>>NO_hour;
}
void HourlyEmployeeType::get_NOR()const{

    cout<<"Number of Hours : "<<NO_hour<<endl;
}
int  HourlyEmployeeType::cal_salary()
{
     int salary;
     salary=NO_hour*hourlyrate;
     return salary ;
}

SalariedEmployeeType::SalariedEmployeeType()
{
    annualSalary=0;
}
// void SalariedEmployeeType::set_name()
// {
//     set_name();
// }
void SalariedEmployeeType::get_name()
{
    EmployeeType::get_name();
}
void SalariedEmployeeType::set_annualSalary()
{
    cout<<"Enter Annual Salary"<<endl;
    cin>>annualSalary;
}
void SalariedEmployeeType::get_annualSalary()const
{
    cout<<"Annual Salary : "<<annualSalary<<endl;
}
float SalariedEmployeeType::cal_salary()
{
    float salary;
    salary=annualSalary/12;
    return salary;
}
