#include<iostream>
#include<string>
class Class;

class FriendCLass
{
private:
    int x;
    int y;
public:
    friend CLASS;
    void change();
};
void FriendCLass::change()
{ 
    CLASS c1;
    c1.num1  = 10;
    c1.num2 = 20;
}

class CLASS
{
private:
    int num1 ,num2;
    friend FriendCLass;
public:
CLASS(){
    num1 = 0;
    num2 = 0;
}
     void changeclass();

  
};
void CLASS::changeclass()
{
    FriendCLass c1;
    c1.change();
    
}
