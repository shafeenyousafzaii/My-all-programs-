#include<iostream>
#include<string>
using namespace std;
class Account
{
private:
    string name;
    float balance;
public:
    float deopistAmount(float x){
        float y;
        balance=balance+x;
        cout<<"Your  balance is "<<balance<<endl;
        
    }
    float withdrawAmount(float y)
    {
        if (y>balance)
        {
            cout<<"Insufficient Amount"<<endl;
        }
        
        balance=balance-y;
        cout<<"Your remaining balance is "<<balance<<endl;
    }
    void setname(string z)
    {
        name=z;
    }
    void setbalance(float balance)
    {
        this->balance=balance;
    }
    float displaybalance()
    { 
        cout<<"Balance is : "<<balance<<endl;
        // return balance;
    }

};
// Account createAccount()
// {
//     Account s;
//     0
// }

int main()
{
    string s;
    float bal,bal2;
    Account S;
    cout<<"Enter your name"<<endl;
    getline(cin,s);
    S.setname(s);
    cout<<"Enter your Account Balance "<<endl;
    cin>>bal;
    S.setbalance(bal);
    int input=0;
    do
    {
        int dep_bal;
        cout<<"\n1: Display Balance\n2: Deposit Amount\n3: Withdraw Amount\n4: Exit"<<endl;
        cin>>input;
        if (input==1)
        {
            S.displaybalance();
        }
        else if (input==2)
        {
            cout<<"Enter the Amount you want to deposit"<<endl;
            cin>>dep_bal;
            S.deopistAmount(dep_bal);
        }
        else if (input==3)
        {
            cout<<"Enter the Amount you want to withdraw"<<endl;
            cin>>bal2;
            S.withdrawAmount(bal2);

        }
        
    } while(input != 4);
    cout<<"\n You entered 4 program executed"<<endl;
    
    return 0;
}

