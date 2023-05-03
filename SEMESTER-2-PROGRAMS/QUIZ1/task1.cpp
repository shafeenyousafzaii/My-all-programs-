#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
ProductClass::ProductClass(int x,string s , int y)
{
    ID=x;
    Name=s;
    quantity=y;
}
Inventory::Inventory(int x, string y, int z , int q):p()
{ 
   
}
ProductClass Inventory::addProduct(int x)
{
   for (int i = 0; i < x; i++)
   {
      p[i]=new ProductClass;
   }
}