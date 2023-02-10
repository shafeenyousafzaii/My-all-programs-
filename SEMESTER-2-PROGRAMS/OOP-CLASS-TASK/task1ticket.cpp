#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string moive_name;
    int adult_ticket=0,child_ticket,adult_or_child,total_tickets;
    float no_of_adult_ticket,no_of_child_ticket,total_amount;
    float gross_amount,net_sale;
    float child_price,adult_price;
    float percentage;
    cout<<"Enter movie name"<<endl;
    getline(cin,moive_name);
    cout<<"Enter Child ticket price"<<endl;
    cin>>child_price;cout<<"\nAdult ticket price"<<endl;cin>>adult_price;
    cout<<"Enter the number of child ticket sold"<<endl;
    cin>>no_of_child_ticket;
    cout<<"Enter the number of adult ticket sold"<<endl;
    cin>>no_of_adult_ticket;
    total_amount=(no_of_child_ticket*child_price)+(no_of_adult_ticket*adult_price);
    cout<<"Enter the percentage of gross amount to be donated"<<endl;
    cin>>percentage;
    gross_amount=(total_amount*percentage)/100;
    net_sale=total_amount-gross_amount;
    total_tickets=no_of_adult_ticket+no_of_child_ticket;
    // cout<<"Movie Name: "<<setfill('*')<<setw(10)<<endl;
    cout<<"Movie Name: "<<setfill('.')<<left<<setw(29)<<"\t"<<moive_name<<endl;
    cout<<"Number of tickets sold : "<<setfill('.')<<left<<setw(13)<<"\t"<<total_tickets<<endl;
    cout<<"Gross Amount : "<<setfill('.')<<left<<setw(29); cout<<"\t$ "<<total_amount<<endl;
    cout<<"Percentage of gorss amount to be donated:   "<<(float)percentage<<"%"<<endl;
    cout<<"Amount Donated :"<<setfill('.')<<setw(21)<<left;cout<<"\t$ "<<gross_amount<<endl;
    cout<<"Net Sale: "<<setfill('.')<<setw(29)<<left; cout<<"\t$ "<<net_sale;

    // while(adult_or_child!=3)
    // {
    // cout<<"Press 1 for adult ticket \nPress 2 for child ticket\nPress 3 to Proceed"<<endl;
    // cin>>adult_or_child;
    // if (adult_or_child==1)
    // {
    //     cout<<"Enter the number of adult tickets"<<endl;
    //     cin>>adult_ticket;
    // }
    // if(adult_or_child==2)
    // {
    //     cout<<"Enter the number of child tickets"<<endl;
    //     cin>>child_ticket;
    // }
    // }
    // no_of_adult_ticket=
    return 0;
}
