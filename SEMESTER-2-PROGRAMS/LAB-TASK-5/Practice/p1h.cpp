#include "p1.h"
#include<iostream>
using namespace std;
item::item()
{
    name=" ";
    price=0;
    quantity=0;
    ID=0;
}


void item::getter()
{
    cout<<"Name     : "<<name<<endl;
    cout<<"Quantity : "<<quantity<<endl;
    cout<<"Price    :"<<price<<endl;
    cout<<"ID       :"<<ID<<endl;
    
}
void item::setter(string s,int x,int y,int z)
{
    name=s;
    price=x;
    quantity=y;
    ID=z;   
}
// void item::getter(int x)
// {
//     for (int i = 0; i < 2; i++)
//     {
//         if (ID==x)
//         {
//             getter();
//         }
        
//     }
    
// }