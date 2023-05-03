#include<iostream>
#include<string>
using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
    Complex(int x=0 , int y=0)
    {
        a=x;
        b=y;
    }
    Complex operator+(const Complex &C )  // this is how you overload an operator by writing the operator keyword followed by any operator 
    {
        Complex temp;
        temp.a=C.a+a;
        temp.b=C.b+b;
         return temp;
    }
    // Complex operator+()
    // {
    //     Complex temp;
    //     temp.a= a+a;
    //     temp.b=b+b;
    // }
    void display()const
    {
        cout<<a<<" : "<<b<<endl;
    }
    // ~Complex();
};
int main()
{
    Complex c1(3,5),c2(7,5),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
