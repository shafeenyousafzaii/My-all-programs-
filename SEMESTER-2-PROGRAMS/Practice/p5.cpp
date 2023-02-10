#include<iostream>
// #define PI=3.14;
using namespace std;
int main()
{
    const float PI=3.14;
    float A=0,r;
    cout<<"Enter the Radius to find area of a circle\n";
    cin>>r;
    A=PI * (r*r);                                                                   
    cout<<"\n"<<A;
    return 0;
}
