#include<iostream>
#include<string>
using namespace std;
class BoatType
{
private:
       int boatLength;    
public:
    BoatType(/* args */);
    BoatType(int);
    int length();
    void swim();
    // ~BoatType();
};
class planeType
{
    private:
    int Maxaltitude;
    public:
    planeType();
    planeType(int );
    int altitude();
    void fly();

};

class skimmer : protected BoatType ,protected planeType
{
private:
    string name;
    int numPASSENGERS;
public:
    skimmer();
    skimmer(int,int,string,int);
    void SWIMANDFLY();
    void display();
    void input();   
};
