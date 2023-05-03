#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
complextype::complextype(int x,int y)
{
    real=x;
    imaginary=y;
}
complextype complextype::operator+(const complextype &c2)
{
    complextype c3;
    c3.imaginary=imaginary+c2.imaginary;
    c3.real=real+c2.real;
    return c3;
}
complextype complextype::operator++()
{
   real++;
}
void complextype::display()
{
    cout<<"Real : "<<real<<endl;
    cout<<"Imginary : "<<imaginary<<endl;
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}


