#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Item
{
public:
    string name;
    int ID,Price,Quantity;
public:
     Item();
    void getter();
    void setter();
    void setter(int x);
    void id(int id);
};
