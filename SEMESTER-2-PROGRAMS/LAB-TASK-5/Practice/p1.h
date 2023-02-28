#include<iostream>
using namespace std;
class item
{
public:
    int ID;
    string name;
    int price ;
    int quantity;
public:
  item();
  
void getter();
void setter(string s,int x,int y,int z);
void getter(int x); //for ID


};

