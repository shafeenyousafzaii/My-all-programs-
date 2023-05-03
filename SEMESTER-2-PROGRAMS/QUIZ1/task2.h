#include<iostream>
#include<string>
using namespace std;
class Product
{
private:
    int ID;
    string name;
    int quantity;
public:
    Product(int ID=0 , string name="",int quant=0);
    virtual void display();
   virtual   ~Product();
};
class Electronics:public Product
{
    private:
    int model_number;
    public:
    Electronics(int id=0,string name="",int qunat=0,int model=0);
    void display();
    ~Electronics();
};
class Apparal : public Product
{
private:
       int size;
public:
    Apparal(int id=0 , string nme="" , int q=0 , int size=0   );
    void display();
     ~Apparal();
};
