#include<iostream>
#include<string>
#include"p1.h"
#include<vector>
using namespace std;
void displayItems(item x[]);
void Updateitems(item x[]);
//void searchid(int x[]);

int main()
{
    int y=0,input;
    cout<<"Enter Number of Items : "<<endl;
    cin>>y;
    item x[2];
    string name;
    int c,v,z;
    Updateitems(x);

    
    
   // cout<<"\n1: Display Items\n2: Update Item Details\n3: Search for items by ID "<<endl;
   // cin>>input;
    do
    {
       // int id[];
     cout<<"\n1: Display Items\n2: Update Item Details\n3: Search for items by ID "<<endl;
     cin>>input;
     if (input==1)
     {
        displayItems(x);
     }
     else if (input==2)
     {
        Updateitems(x);
     }
     //else if (input==3)
     //{
     //   cout<<"\nEnter ID : "<<endl;
      //  cin>>id;
      //  searchid(id);
        
     //}
     
     
      
    } while (input!=4);
    
    return 0;
}
void Updateitems(item x[])
{
    string name;
    int xx,y,z;
    for(int i=0;i<2;i++)
    {
    cout<<"Enter name "<<endl;
    getline(cin,name);
    cout<<"Enter quantity "<<endl;
    cin>>xx;
    cout<<"Enter Price "<<endl;
    cin>>y;
    cout<<"Enter ID"<<endl;
    x[i].setter(name,xx,y,z);
    }
}
void displayItems(item x[])
{
    for (int i = 0; i < 2; i++)
    {
        x[i].getter();
    }
    
    
}
//void searchid(int x[])
//{
    
//}

/*void item::Updateitems(item x[])
{
    cout<<"Enter Name : "<<endl;
    cin>>name;
    cout<<"Enter price : "<<endl;
    cin>>price;
    cout<<"Enter Quantity : "<<endl;
    cin>>quantity;
    cout<<"Enter ID NO : "<<endl;
    cin>>ID;
    
}*/