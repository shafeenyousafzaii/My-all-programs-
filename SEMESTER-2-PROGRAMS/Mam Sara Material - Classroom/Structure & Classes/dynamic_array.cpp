#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int *p = &x;

  cout << "Address of x is " << p << " and address of pointer p is " << &p << endl;
  //return 0;
  p = new int;

  cout << "Address of x is " << p << " and address of pointer p is " << &p << endl;

  //return 0;
  int *q = new int[20];

  for(int i=0;i<20;i++)
    *(q+i) = -1;

  for(int i=0;i<20;i++)
    cout << q[i] << " ";

 cout << endl;
 //return 0;
 //delete p;
 //cout << "The value in p is " << p << endl;
 p = q;

 cout << "Using p" << endl;
 for(int i=0;i<20;i++)
   cout << p[i] << " ";
 cout << endl;

  for(int i=0;i<20;i++)
     p[i] = 2;

  cout << "Using q" << endl;
  for(int i=0;i<20;i++)
      cout << q[i] << " ";
 cout << endl;

 //delete q[];
 //cout << "The value in p is " << p << endl;
 //cout << "The value in p is " << q << endl;
 //q=NULL;
 //p=NULL;

//return 0;
 int *arr[10];

 for(int i=0; i<10;i++)
  arr[i] = new int[4];

  cout << "Using arr" << endl;
  for(int i=0; i<10;i++)
  {
    for(int j=0;j<4;j++)
    {
        arr[i][j]=1;
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }

 //return 0;
 int **arr2;

 arr2 = new int*[10];

 for(int i=0; i<10;i++)
  arr2[i] = new int[4];

  cout << "Using arr2" << endl;
  for(int i=0; i<10;i++)
  {
    for(int j=0;j<4;j++)
    {
        arr2[i][j]=i+j;
        cout << arr2[i][j] << " ";
    }
    cout << endl;
  }

 /*for(int i=0; i<10;i++)
   for(int j=0;j<4;j++)
      arr2[i][j] = arr[i][j];*/
 arr2 = arr;
cout << "Using arr2" << endl;
 for(int i=0; i<10;i++)
 {
   for(int j=0;j<4;j++)
   {

       cout << arr2[i][j] << " ";
   }
   cout << endl;
 }

 for(int i=0; i<10;i++)
 {
   for(int j=0;j<4;j++)
   {

       arr[i][j] = 0;
   }
   
 }

cout << "Using arr2" << endl;
 for(int i=0; i<10;i++)
 {
   for(int j=0;j<4;j++)
   {

       cout << arr2[i][j] << " ";
   }
   cout << endl;
 }



 return 0;





}
