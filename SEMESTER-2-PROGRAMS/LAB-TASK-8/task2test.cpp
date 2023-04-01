#include<iostream>
#include<string>
#include<iomanip>
#include"task2.h"
using namespace std;
int main()
{
    int x;
    HourlyEmployeeType HE;
    SalariedEmployeeType SE;
    cout<<"Are you a 1 ) Hourly Employee or a 2) salaried Employee"<<endl;\
    cin>>x;
    if (x==1)
    {
        int salary;
        HE.set_name();

        HE.set_HR();
        HE.set_NOR();  
        salary=HE.cal_salary();
        HE.get_name();
        cout<<"Salary is : "<<salary<<endl;
    }
    else if (x==2)
    {
        int salary;
        SE.set_name();
        SE.set_annualSalary();
        salary=SE.cal_salary();
        SE.get_name();
        cout<<"Salary is : "<<salary<<endl;
    }
    return 0;
    
}