#include<iostream>
#include<string>
#include"task1one.h"
using namespace std;
complextype::complextype(int x,int y)
{
    real=x;
    imaginary=y;
}
complextype addComlex(complextype c1,complextype c2)
{
    complextype c3;
    c3.imaginary=c1.imaginary+c2.imaginary;
    c3.real=c1.real+c2.real;
    return c3;
}
void complextype::display()
{
    cout<<"Real : "<<real<<endl;
    cout<<"Imginary : "<<imaginary<<endl;
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}


