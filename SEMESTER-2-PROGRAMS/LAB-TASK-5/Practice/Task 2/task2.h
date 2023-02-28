#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
    string name,jobtitle;
    int ID,no_of_hours_worked;
    int hourly_rate;
    int basee_salary;
public:
 employee();
void  cacl_Salary(int x);
void setter();
void display();
~employee();
};

