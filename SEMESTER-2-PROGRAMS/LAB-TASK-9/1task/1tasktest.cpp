#include<iostream>
#include<iomanip>
#include<string>
#include"1task.h"
using namespace std;
int main()
{
    // AnimalTyoe a1;
    BirdType b1("parrot",18,15);
    ReptileType r1("Crocodile",20,"Land and water");
    b1.speak();
    r1.speak();
}