#include<iostream>
#include<string>
using namespace std;
class AnimalTyoe
{
public:
    string name;
    int age;
public:
    AnimalTyoe();
    AnimalTyoe(string,int);
    // void setNAME();
    // void getNAME()const;
    // void setAGE();
    // void getAGE()const;
    void speak()const;
    void display();
    // ~AnimalTyoe();
};
class BirdType : private AnimalTyoe
{
private:
    int winglength;
public:
    BirdType();
    BirdType(string,int,int);
    // void setLENGTH();
    // void getLENGTH()const;
    void speak()const;
    // ~BirdType();
};
class ReptileType : private AnimalTyoe
{
private:
    string habitat;
public:
    ReptileType();
    ReptileType(string,int,string);
    void speak()const;
    void setHABITAT();
    void getHABITAT()const;
};
 
