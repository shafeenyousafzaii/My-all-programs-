#include<iostream>
using namespace std;
class Animal
{
protected:
    string name;
    string color;
public:
    Animal(string,string);
    virtual void display()=0;
    ~Animal();
};

class Deer : public Animal
{
private:
    bool Antlers;
public:
    Deer(bool,string ,string);
    void display();
    
    ~Deer();
};

class Zebra : public Animal
{
private:
    string stripe_pattern;
public:
    Zebra(string ,string,string);
    void display();
    ~Zebra();
};




