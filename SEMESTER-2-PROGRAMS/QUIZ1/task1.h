#include<iostream>
#include<string>
using namespace std;
class ProductClass
{
private:
    int ID;
    string Name;
    int quantity;   
public:
    ProductClass(int ID=0,string Name="",int quantity=0 );
    // void display();
    

    // ~ProductClass();
};
class Inventory
{
private:
    int size;
    ProductClass *p[];
    
public:
    Inventory(int id=0 , string nme = " " , int quant=0, int size=0):p(){
        
    };
    ProductClass addProduct(int);
    void display();
    // ~Inventory();s
};

