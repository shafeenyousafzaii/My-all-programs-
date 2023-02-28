#include<iostream>
#include<string>
#include<iomanip>
#include"P1.h"
using namespace std;
Item::Item()
{
    name="";
    ID=0;
    Price=0;
    Quantity=0;
}
void Item::setter()
{
    cout<<"Enter name of product : "<<endl;
    cin>>name;
    cout<<"Enter Price of product : "<<endl; 
    cin>>Price;
    cout<<"Enter quantity : "<<endl;
    cin>>Quantity;
    cout<<"Enter unique ID : "<<endl;
    cin>>ID;
}
void Item::setter(int x)
{
    if(x==1)
    // cout<<"Enter name of product : "<<endl;
    // cin>>name;
    {
        cout<<"Enter Price of product : "<<endl; 
        cin>>Price;
    }
    if(x==2)
    {
    cout<<"Enter quantity : "<<endl;
    cin>>Quantity;
    }
    // cout<<"Enter unique ID : "<<endl;
    // cin>>ID;
}
void Item::getter()
{
    cout<<"Name of Product     : "<<name<<endl;
    cout<<"Price of Product    : "<<Price<<endl;
    cout<<"Quantity of Product : "<<Quantity<<endl;
    cout<<"ID of product       : "<<ID<<endl;

}
void Item::id(int x)
{
    if (x==ID)
    {
        getter();
    }
    else
    {
        cout<<"Item not found"<<endl;
    }
    
    
}