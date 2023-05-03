#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> reverseArray(vector<int> a) {
    vector<int>b;
    int i = a.size();
    int j=0;
    for( i=a.size() ,  j=0  ; i>=0  ( j<a.size() ); i-- , j++)
    {
       b.push_back(a[j]);
    //    b.p
    }
    return b;

}
int main()
{
    vector<int> a={1,2,3,4,5};
    vector<int> b=reverseArray(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<endl;
    }
  a.    
}
