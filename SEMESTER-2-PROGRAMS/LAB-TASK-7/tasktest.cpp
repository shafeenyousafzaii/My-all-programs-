#include<iostream>
#include<string>
#include<iomanip>
#include"task.h"
using namespace std;
int main()
{
    contactBookType c;
    int x;
    do
    {
       cout<<"Choose : "<<endl;
       cout<<"1 : addContact "<<endl;
    //    cout<<"2 : Change Details"<<endl;
       cout<<"2 : print details"<<endl;
       cout<<"3 : To end "<<endl;
       cin>>x;
       if (x==1)
       {
         c.addcontact();
       }
       else if(x==2)
       {
        c.printdetails();
       }
    } while (x!=3);
    
    return 0;
}
