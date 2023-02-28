#include<iostream>
#include<string>
#include<iomanip>
#include"task2.h"

int main()
{
    int emp,salary;
 //   cout<<"Enter the number of employees : "<<endl;
 //   cin>>emp;
    employee x[2]; // becasue of the compiler error i am taking 2 by default
    for (int i = 0; i < 2; i++)
    {
        x[i].setter();
    }
    for(int i=0;i<2;i++)
    {
       cout<<"Enter your salary : "<<endl;
       cin>>salary;
       x[i].cacl_Salary(salary);
    }
    for (int i = 0; i < 2; i++)
    {
        x[i].display();
    }
    
    
    
    return 0;
}
