// This code includes the standard input/output, string and iomanip libraries and SavingsAccountType header file in C++.
#include<iostream>
#include<string>
#include<iomanip>
#include"SavingsAccountType.h"
using namespace std;

int main()
{
    int input;
    SavingsAccountType saver1(2000.00),saver2(3000.00); // creates two instances of SavingsAccountType with initial balances

    do {
        int saver;
        cout<<"Choose from the following :"<<endl;
        cout<<"1:Set Monthly Interest Rate"<<endl;
        cout<<"2:Calculate Balance for saver 1 or press <1> for 1 and <2> for 2"<<endl;
        cout<<"3:Exit"<<endl;
        cin>>input;

        if(input ==1) {
            saver1.setAIR(); // sets monthly interest rate for saver1
        }
        else if(input == 2) {
            cout<<"Saver 1 <1> or saver 2 <2>  "<<endl;
            cin>>saver;

            if (saver==1) {
                saver1.calculateMonthlyInterest(); // calculates monthly interest and updates balance for saver1
            }
            else if(saver==2) {
                saver2.calculateMonthlyInterest();  // calculates monthly interest and updates balance for saver2
            }
            else if(saver<0 || saver>2)
            {
               cout<<"Choose the correct option"<<endl;
               break;
            }
        }

    }while(input!=3);

    return 0;
}
