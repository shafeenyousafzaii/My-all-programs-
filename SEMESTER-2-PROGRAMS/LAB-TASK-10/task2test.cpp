#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
int main()
{
  Animal *pointer[]=
  {
    new Deer(true,"Khizar","White"),
    new Zebra("Black&White","Khizar","White"),
  };
  for(int i = 0; i < 2; i++)
  {
     pointer[i]->display();
  }
  for (int i = 0; i < 2; i++)
  {
     delete pointer[i];
  }
  // delete [] pointer;
  
     
}