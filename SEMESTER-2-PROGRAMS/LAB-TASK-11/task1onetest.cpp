#include<iostream>
#include<string>
#include"task1one.h"
using namespace std;
int main()
{
    complextype c1(4,5),c2(5,4),c4;
    c4=addComlex(c1,c2);
    c4.display();
    return 0;

}