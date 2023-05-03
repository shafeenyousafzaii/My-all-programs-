#include<iostream>
#include<string>
#include"task2.h"
using namespace std;
void DisplayAll(Product *p[]);
int main()
{
    Product*p[]={
        p[0]= new Electronics(1,"laptop",10,10101),
        p[1]= new Apparal(2,"Computer",10,10)
    };
   DisplayAll(p);
}
void DisplayAll(Product *p[])
{
  for (int i = 0; i < 2; i++)
  {
     p[i]->display();
  }
  for (int i = 0; i < 2; i++)
  {
     p[i]->~Product();
  }
  delete [] p;
  
  
}