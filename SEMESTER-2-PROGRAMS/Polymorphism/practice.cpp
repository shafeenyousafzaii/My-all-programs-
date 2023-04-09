
#include<string>
#include<iostream>
using namespace std;


class practice
{
private:
    int x;
    int y;
    int sum;
public:
    practice();
    practice(int , int  );
    virtual void setsum();
    void getsum();
    // ~practice();
};

practice::practice()
{
    x=0;
    y=0;
    sum=x+y;
}
practice::practice(int x,int y)
{
    this->x=x;
    this->y=y;
    sum=x+y;

}
void practice::setsum()
{
    
    sum=x+y;
}
// cout<<"Hello"<<endl;
void practice::getsum()
{
    cout<<"Sum is : "<<sum<<endl;
}
// -----------------------------------------------------------------------------------------------
class ploymorphism : public practice
{
private:
    int sum;
public:
    ploymorphism();
    ploymorphism(int,int,int);
     void setsum(int , int );
     void getsum();
    ~ploymorphism();
    void setsum();
};

ploymorphism::ploymorphism()
{
    sum=0;
}
ploymorphism::ploymorphism(int x , int y , int zz=0  ):practice(x , y )
{
   sum=zz;  
}
ploymorphism::~ploymorphism()
{
    cout<<"OKAY BRO !<"<<endl;
}
  void  ploymorphism::setsum()
{
     practice::setsum();
}
void ploymorphism::getsum()
{
    practice::getsum();
}

int main()
{
    practice p1(10,15);
    ploymorphism p2(20,15);
    p1.getsum();
    p2.getsum();
}