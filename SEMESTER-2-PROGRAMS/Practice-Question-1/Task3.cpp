#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int gross_salary; float federal_tax,state_tax,social_security_tax,Net_pay,medicad_tax,Pension_plan,Health_insurance;
    string name;
    cout<<"Enter your Name"<<endl;
    cin>>name;
    cout<<"Enter your Gross Salary"<<endl;
    cin>>gross_salary;
    federal_tax=gross_salary*0.15;
    state_tax=gross_salary*0.3;
    social_security_tax=gross_salary*0.575;
    medicad_tax=gross_salary*0.275;
    Pension_plan=gross_salary*0.5;
    Health_insurance=75;
    Net_pay=(gross_salary)-((federal_tax)-(state_tax)-(social_security_tax)-(medicad_tax)-(Pension_plan)-(Health_insurance));  
    cout<<name<<endl;
    cout<<endl;
    cout<<"Gross Amount:"<<setfill('.')<<setw(15)<<fixed<<right<<endl;
    cout<<"Federal Tax:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<federal_tax<<endl;
    cout<<"State Tax:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<setprecision(2)<<state_tax<<endl;
    cout<<"Social S.Tax:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<social_security_tax<<endl;
    cout<<"Medicad Tax:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<medicad_tax<<endl;
    cout<<"Pension Plan:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<Pension_plan<<endl;
    cout<<"Health Insurance:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<Health_insurance<<endl;
    cout<<"Net Pay:"<<setprecision(2)<<fixed<<right<<setfill('.')<<setw(15)<<Net_pay<<endl;
    
    return 0;
}
