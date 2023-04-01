#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class EmployeeType
{
private:
    string name;

public:
    EmployeeType();
    void set_name();
    void get_name()const;
    void cal_salary();
    // ~EmployeeType();
};
class HourlyEmployeeType : public EmployeeType
{
private:
    int hourlyrate;
    int NO_hour;

public:
    HourlyEmployeeType();
    int cal_salary();
    void get_name()const;
    void set_HR();
    void get_HR()const;
    void set_NOR();
    void get_NOR()const;
    // ~HourlyEmployeeType();

};
class SalariedEmployeeType : public EmployeeType
{
private:
    int annualSalary;
public:
    SalariedEmployeeType();
    float cal_salary();
    void set_annualSalary();
    void get_annualSalary()const;
    
    void get_name();

    // ~SalariedEmployeeType();
};



