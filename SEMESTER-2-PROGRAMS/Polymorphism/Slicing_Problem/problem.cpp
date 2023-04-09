#include<iostream>
using namespace std;
class    petType 
{
public:
virtual    void    print();                                 //virtual    function 
petType(string );
private: 
string    name;
};
petType::petType(string x="")
{
  name=x;
}
void petType::print()
{
    cout<<"Name  : "<<name<<endl;
}
class    dogType:    public    petType
{
public:
void    print();
void    setBreed(string    b    =    ""); 
dogType(string    n    =    "",    string    b    =    "");
private:
string    breed; 
};
dogType::dogType(string x,string y):petType(x)
{
    breed=y;
}
void dogType::print()
{
    petType::print();
    cout<<"Breed : "<<breed<<endl;
}
void dogType::setBreed(string x)
{
    breed=x;
}
int main()
{
    petType *p=new petType("Hello");
    dogType *d=new dogType("Sarmad" , "German Shepherd");
    d->setBreed("Siberian Husky");
    p=d;
    p->print();
}