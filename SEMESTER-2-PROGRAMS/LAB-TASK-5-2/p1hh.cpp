#include<iostream>
#include<string>
#include<iomanip>
#include"P1.h"
using namespace std;
void DisplayItems(Item x[]);
// void DisplayItems();
void UpdateItems(Item x[]);
// void UpdateItems();
void searchitem(Item x[]);
int main()
{
    
    Item x[2];
    int size;
    int input;
    for (int i = 0; i < 2; i++)
    {
        x[i].setter();
    }
    
    // cout<<"Enter Number of Items to be stored : "<<endl;
    // cin>>size;
    cout<<"\n1: Display Items\n2: Update Item Details\n3: Search for items by ID "<<endl;
    cin>>input;
    cout<<endl;
    do
    {
        cout<<"\n1: Display Items\n2: Update Item Details\n3: Search for items by ID "<<endl;
        cin>>input;
        if (input==1)
        {
            // for (int i = 0; i < 2; i++)
            // {
               DisplayItems(x);
            // }
            
            
        }
        else if (input==2)
        {
            for (int i = 0; i < 2; i++)
            {
                UpdateItems(x+i);
            }
            
        }
        else if (input==3)
        {
            int id;
            for (int i = 0; i < 2; i++)
            {
                // cout<<"Enter ID of item :"<<endl;
                // cin>>id;
                cout<<"Change for Item No "<<i+1<<endl;
                searchitem(x+i);
            }
            
        }
        
        

    } while (input!=4);
    
    
    return 0;
}
void DisplayItems(Item x[])
{ 
//    Item y;
//    y.getter();
   for (int i = 0; i < 2; i++)
   {
     x[i].getter();
   }
   

}
void UpdateItems(Item x[])
{
    int change;
   cout<<"What do you want to update \n 1:Price \n 2:Quantity "<<endl;
   cin>>change;
   x->setter(change);
}
void searchitem(Item x[])
{
    int IDNUM;
    cout<<"Enter ID no "<<endl;
    cin>>IDNUM;
    x->id(IDNUM);


}