#include<iostream>
#include<string>
using namespace std;
int main()
{
    string fullname,name,last_name;
    cout<<"Enter your name:"<<endl;
    // cin>>name;
    getline(cin,name);
    cout<<"Enter your last name"<<endl;
    getline(cin,last_name);
    fullname=name+last_name;
    cout<<"Full name : "<<fullname<<endl;
}
