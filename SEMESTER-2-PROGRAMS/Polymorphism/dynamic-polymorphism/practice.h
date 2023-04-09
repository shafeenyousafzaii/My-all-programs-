#include<iostream>
#include<string>
using namespace std;
class practice
{
private:
     int length;
     int widht;
public:
    practice();
    practice(int,int);
    void setdata(int , int );
  virtual  void getdata();
   virtual ~practice();
};

class poly_rect : public practice
{
private:
      int choraye;
public:
    poly_rect();
    poly_rect(int,int,int);
void setdata(int);
  void getdata();
    ~poly_rect();
};


class morphism_volume : public practice
{
private:
    int height;
    int volume;
public:
    morphism_volume();
    morphism_volume(int,int,int ,int    );
    void setdata(int,int);
    void setvolume(int);
    void getdata();
     ~morphism_volume();
};


