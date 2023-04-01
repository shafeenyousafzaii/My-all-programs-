#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class SavingsAccountType
{
private:
    static int annualInterestRate ;
    float savingsBalance;
public:
    SavingsAccountType();
    SavingsAccountType(float);
    // ~SavingsAccountType();
    void setBalance();
     void  setAIR();
    void getBalance()const;
    void calculateMonthlyInterest();
     
};


