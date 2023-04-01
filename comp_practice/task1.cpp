#include<iostream>
#include<string>
#include"SavingsAccountType.h"
using namespace std;
SavingsAccountType::SavingsAccountType()
{
    savingsBalance=0; 
    
}
SavingsAccountType::SavingsAccountType(float x)
{
    savingsBalance=x;
}
void  SavingsAccountType::setBalance()
{
        float x;
        cout<<"Enter Your SavingBalance"<<endl;
        cin>>x;
        savingsBalance=x;
}
void SavingsAccountType::setAIR()
{
      static int  x;
      cout<<"Enter InterestRate : "<<endl;
      cin>>x;
      SavingsAccountType::annualInterestRate=x;
}
// sttatic ints SavingAccountType::getAIR()const
// {
//     cout<<"Annual Interest Rate is : "<<annualInterestRate<<endl;
// }
void SavingsAccountType::calculateMonthlyInterest()
{
    float percentage,balance,balance2;
    percentage=annualInterestRate;
    balance=savingsBalance*(percentage/100);
    balance2=savingsBalance-balance;
    cout<<"Balance after deduction of monthlyInterestRate of : "<<percentage<<"% is ="<<balance2<<setprecision(2)<<endl;

}
int SavingsAccountType::annualInterestRate=0;