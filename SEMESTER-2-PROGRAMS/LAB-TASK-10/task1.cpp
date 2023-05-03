#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
Animal::Animal(string name="",string color="")
{ 
    this->name=name;
    this->color=color;
}
Deer::Deer(bool antlers=false,string name="",string color=""):Animal(name,color)
{
    Antlers=antlers;
}
void Deer::display()
{
    cout<<"Deer Name  : "<<name<<endl;
    cout<<"Deer Color : "<<color<<endl;
    cout<<"Antlers    : "<<Antlers<<endl;
}
Deer::~Deer()
{
    cout<<"Destroyed Deer"<<endl;
}
Animal::~Animal()
{
  cout<<"Animal Destroyed"<<endl;
}
Zebra::Zebra(string stripe=" ",string name=" ",string color=" "):Animal(name,color)
{
    stripe_pattern=stripe;
}
void Zebra::display()
{
    cout<<"Zebra Name  :"<<name<<endl;
    cout<<"Zebra color :"<<color<<endl;
    cout<<"Stripes     : "<<stripe_pattern<<endl;
}
Zebra::~Zebra()
{
    cout<<"Zebra Destroyed"<<endl;
}