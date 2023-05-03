#include<iostream>
#include"taskthree.h"
using namespace std;
int main()
{
    int choice;
    cout<<"Do you want to enter the details of the characters? (1 for yes and 0 for no)"<<endl;
    cin>>choice;
    if (choice==1)
    {
        
    Character *c1=new Warrior;
    Character *c2=new Mage;
    Character *c3=new Thief;
    cout<<"Enter the name of the warrior"<<endl;
    string name;
    cin>>name;
    c1->setname(name);
    cout<<"Enter the strength of the warrior"<<endl;
    int strength;
    cin>>strength;
    c1->setStrength(strength);
    cout<<"Enter the name of the mage"<<endl;
    cin>>name;
    c2->setname(name);
    cout<<"Enter the intelligence of the mage"<<endl;
    int intelligence;
    cin>>intelligence;
    c2->setIntelligence(intelligence);
    cout<<"Enter the name of the thief"<<endl;
    cin>>name;
    c3->setname(name);
    cout<<"Enter the agility of the thief"<<endl;
    int agility;
    cin>>agility;
    c3->setAgility(agility);
    c1->attack();
    c2->attack();
    c3->attack();
    delete c1;
    delete c2;
    delete c3;
    }
    else if (choice==0)
    {
    Character *c1=new Warrior("Khizar",100);
    Character *c2=new Mage("Ahmad",50);
    Character *c3=new Thief("Bilal",150);
    c1->attack();
    c2->attack();
    c3->attack();
    delete c1;
    delete c2;
    delete c3;
    }
    
    return 0;
}