#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter number of rows"<<endl;
    cin>>x;
    for (int i = 0; i <= x; i++)
    {
       for (int j = 0; j < i; j++)
       {
         cout<<"*";
       }
       cout<<endl;
    }
    for (int i = x; i >= 0; i--)
    {
        for ( int j = i; j != 0 ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
