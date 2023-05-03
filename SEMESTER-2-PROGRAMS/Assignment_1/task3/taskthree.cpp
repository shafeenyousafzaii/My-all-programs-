#include<iostream>
using namespace std;
#include"taskthree.h"
Character::Character(string name)
{
   this->name=name;
}
void Character::setAgility(int agility)
{
}
void Character::setIntelligence(int intelligence)
{
}
void Character::setStrength(int strength)
{
}
void Character::setname(string name)
{
}
Character::~Character()
{
   cout<<"Character "<<name<<" destroyed"<<endl;
}
void Character::attack()
{
   cout<<"Character "<<name<<" attacks: "<<endl;
}
Warrior::Warrior(string name,int strenght):Character(name)
{
   strength=strenght;
}
void Warrior::setname(string name)
{
   this->name=name;
}
void Warrior::setStrength(int strength)
{
   this->strength=strength;
}
void Warrior::attack()
{
    cout<<"Warrior "<<name<<" attacks: "<<endl;
    // cout<<endl;
    cout<<name<<" attacks with strength "<<strength<<endl;
}
// void Warrior::setname(string name)
// {
//     this->name=name;
// }
// void Warrior::setStrength(int strength)
// {
//     this->strength=strength;
// }

Warrior::~Warrior()
{
   cout<<"Warrior "<<name<<" destroyed"<<endl;
}
Mage::Mage(string n , int in):Character(n)
{
   intelligence=in;
}
void Mage::attack()
{
   cout<<"Mage "<<name<<" attacks: "<<endl;
   cout<<name<<" attacks with fireballs using intelligence "<<intelligence<<endl;
}
void Mage::setname(string name)
{
    this->name=name;
}
void Mage::setIntelligence(int intelligence)
{
    this->intelligence=intelligence;
}
Mage::~Mage()
{
   cout<<"Mage "<<name<<" destroyed"<<endl;
}
Thief::Thief(string nme,int agl):Character(nme)
{
   agility=agl;
}
void Thief::attack()
{
   cout<<"Thief "<<name<<" attacks: "<<endl;
   cout<<name<<" attacks with daggers using agility "<<agility<<endl;
}
void Thief::setname(string name)
{
    this->name=name;
}
void Thief::setAgility(int agility)
{
    this->agility=agility;
}
Thief::~Thief()
{
   cout<<"Thief "<<name<<" destroyed"<<endl;
}