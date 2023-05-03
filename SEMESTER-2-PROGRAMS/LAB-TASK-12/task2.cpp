#include<iostream>
#include<string>
#include"task2.h"
using namespace std;
complextype::complextype(int x,int y)
{
    real=x;
    imaginary=y;
}
// complextype operator+(const complextype,const complextype);
complextype operator+(const complextype c2,const complextype c1)
{
    complextype c3;
    c3.imaginary=c2.imaginary+c2.imaginary;
    c3.real=c1.real+c1.real;
    return c3;
}
complextype operator++(complextype &c)
{

   c.real++;
   return c;
}
void complextype::display()
{
    cout<<"Real : "<<real<<endl;
    cout<<"Imginary : "<<imaginary<<endl;
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}


