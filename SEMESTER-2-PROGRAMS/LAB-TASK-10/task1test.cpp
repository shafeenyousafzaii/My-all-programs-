#include<iostream>
#include<string>
#include"task1.h"
using namespace std;
int main()
{
  Animal *p[]=
  {
  new Deer (true,"Sarmad","Brown"),
  new Zebra ("Brown&white","Sarmad","White")
  
  };
  p[0]->display();
  p[1]->display();
}