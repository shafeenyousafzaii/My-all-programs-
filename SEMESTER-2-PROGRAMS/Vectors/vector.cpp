#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> s={1,2,3,4};
        s.push_back(10);
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
    //    cout<<s.size();cout<<endl;
        s.push_back(10);
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.push_back(10);
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.push_back(10);
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.push_back(10);
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
    // cout<<s.size();cout<<endl;
    cout<<"POP BACK " << endl;

        s.pop_back(); 
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.pop_back();
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.pop_back();
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.pop_back();
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;
        s.pop_back();
        s.shrink_to_fit();
        cout<<s.size();cout<<endl;
        cout<<s.capacity();cout<<endl;

    // cout<<s.capacity();cout<<endl;
    // cout<<s.size();

//  for (int i = 0 , int j = 0 ; i < count; i++)
 {
    /* code */
 }'';
 for( i=a.size() ,  j=0  ; i>=0 ;  j<a.size() ; i-- , j++)
    {
    }
 
}