#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter two numbers to swap them"<<endl;
    cin>>x;cout<<"next num : "<<endl;cin>>y;
    cout<<"x="<<x;cout<<"\ty="<<y;
    z=x;
    x=y;
    y=z;
    cout<<"\nx="<<x;cout<<"\ty="<<y;
    
 
    return 0;
}
