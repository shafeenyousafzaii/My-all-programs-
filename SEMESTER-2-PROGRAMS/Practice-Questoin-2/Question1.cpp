#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;
class AngleType // Class of angle type.
{
private: // data members of the class.
    int degrees , seconds ;
    float minutes;
    char Dir;
public: // methods for the class.
    AngleType(); // Constructer.
    ~AngleType(); // Destructer.
  void setter(char x); // setter function for input
  void getter(); // getter function for  output 
//   float setter(); // function for minutes and seconds.
};
AngleType::AngleType() // Assigning values to variables when class variable is created.
{
    degrees=0; 
    minutes=0;
    Dir='x';
}
AngleType::~AngleType() // Displays a "Destroyed " message on the screen after program ends
{
    cout<<"ThankYou!"<<endl;
}
void AngleType::setter(char x)
{
    cout<<"Enter Degress"<<endl;
    if (x=='L') //Capital L for longitude
    {
        cout<<"Enter Degress from 0 to 180 "<<endl;
        cin>>degrees;
        cout<<"Enter Minutes in decimal "<<endl;
        cin>>minutes;
        cout<<"Enter Directions 'N' 'S' 'E' 'W' "<<endl;
        cin>>Dir;
        if (degrees >180)
        {
            cout<<"You entered the wrong directions for latitude , input must be within parameters"<<endl;
            cin>>degrees;
        }
        
       
        
    }
    else if (x=='l') //Small L for latitude
    {
        cout<<"Enter Degrees from 0 to 90 "<<endl;
        cin>>degrees;
        cout<<"Enter Minutes in decimal "<<endl;
        cin>>minutes;
        cout<<"Enter Directions 'N' 'S' 'E' 'W' "<<endl;
        cin>>Dir;
        if (degrees >90)
        {
            cout<<"You entered the wrong directions for latitude , input must be within parameters"<<endl;
            cin>>degrees;
        }
        
    }

    
    
    
}
// float AngleType::setter()
// { 
//     float min;
//     if (minutes>60)
//     {
//         min=minutes-60;

//     }
    

// }
void AngleType::getter()
{
  cout<<fixed<<setprecision(1);
  cout<<degrees<<"\xF8"<<minutes<<" "<<Dir<<endl;
}
int main()
{

    char charx; // for sending in setter function
    AngleType(); // calling constructer
    AngleType x;  // declaring a class type variable object
    cout<<"Choose 'L' Longitude and 'l' for latitude"<<endl;
    cin>>charx;
    x.setter(charx); // calling setter function for input
    // x.setter();
    x.getter();
    return 0;
    x.~AngleType();
}
