#include<iostream>
#include<string>
#include"task2.h"
using namespace std;
employee::employee()
{
    name=" ";
    jobtitle=" ";
    ID=0;
    no_of_hours_worked=0;
    hourly_rate=0;
    basee_salary=0;
}
void employee::cacl_Salary(int x)
{
    int hourly_rate=2;
    int salary;
    int base_salary,overtime_hours;
    int overtimee;
    if (x<=40)
    {
        salary=no_of_hours_worked*hourly_rate;
        basee_salary=salary;
    }
    else if (x>40)
    {
        no_of_hours_worked;
         base_salary=no_of_hours_worked*hourly_rate;
        salary=base_salary;
        overtime_hours=no_of_hours_worked-40;
        overtimee=overtime_hours*(hourly_rate*hourly_rate);
        salary=salary+overtimee;
        basee_salary=salary;
    }
    
}
void employee::setter()
{
    string s,s2;
    int hours_worked,hrly_rates,basepay;
    cout<<"\nEnter your name : "<<endl;
    getchar();
    getline(cin,s);
    s=name;
    cout<<"Enter your job title : "<<endl;
    getline(cin,s2);
    s2=jobtitle;
    cout<<"Enter no of hours worked : "<<endl;
    cin>>hours_worked;
    hours_worked=no_of_hours_worked;
    cout<<"Enter hourly rate : "<<endl;
    cin>>hrly_rates;
    hrly_rates=hourly_rate;
    cout<<"Enter base pay : "<<endl;
    cin>>basepay;
    basee_salary=basepay;


}
void employee::display()
{
    cout<<"Name   : "<<name<<endl;
    cout<<"Salary : "<<basee_salary<<endl;
}
employee::~employee()
{
    cout<<"Destroyed"<<endl;
}