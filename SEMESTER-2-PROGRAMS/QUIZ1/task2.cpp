#include<iostream>
#include<string>
#include"task2.h"
using namespace std;
Product::Product(int id, string name , int  quant)
{
    ID=id;
    this->name=name;
    quantity=quant;
}
void Product::display()
{
    cout<<ID<<" : "<<name<<" : "<<quantity<<endl;
}
Product::~Product()
{
    cout<<"Product destroyed"<<endl;
}
Electronics::Electronics(int id, string n, int quant,int model):Product(id,n,quant)
{
    model_number=model;
}
void Electronics::display()
{
  Product::display();
  cout<<"Model Number : "<<model_number<<endl;
}
Electronics::~Electronics()
{
    cout<<"Electronics Destroyed"<<endl;
}
Apparal::Apparal(int id , string nme, int q , int size):Product(id,nme,q)
{
    this->size=size;
}
void Apparal::display()
{
  Product::display();
  cout<<"Size" <<size<<endl;
}
Apparal::~Apparal()
{
    cout<<"Apparal Destroyed"<<endl;
}