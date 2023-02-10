#include<iostream>
using namespace std;
int main()
{
    char x,y; int burger=0,fries_or_coldrink=0,total_price=0;
    cout<<"Do you want a burger ? , Enter Y"<<endl;
    cin>>x;
    if (x=='Y' || x=='y')
    {
        burger=500;
        cout<<"Burger Added";
        cout<<"Thank You!\n"<<endl;
        cout<<"Your bill is : "<<burger<<endl;
        cout<<"Do you want an add-on of fries and cold drink ?"<<endl;
        cin>>y;
        if (y=='Y' || y=='y')
        {
            fries_or_coldrink=200;
        }
        total_price=burger+fries_or_coldrink;
        cout<<"Total price is : "<<total_price<<endl;        
    }
    else if (x=='N' || x=='n')
    {
        cout<<"User does not want anything"<<endl;
    }
    else if (x!='N' || x!='n')
    {
        cout<<"Invalid Input"<<endl;
    }
    
    return 0;
}
