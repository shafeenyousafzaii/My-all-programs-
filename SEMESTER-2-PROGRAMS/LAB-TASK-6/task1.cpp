#include<iostream>
#include<string>
#include<iomanip>
#include<string.h>
#include"Task1.h"
using namespace std;
Favourite_Songs::Favourite_Songs()
{
    size = 1;
    p = new string[size];
    p[0] = "empty";
}

Favourite_Songs::~Favourite_Songs()
{
    cout << "GoodBye!" << endl;
    delete[] p;
}

void Favourite_Songs::addSong()
{
    size++;
    string *x = new string[size];
    for (int i = 0; i < size - 1; i++)
    {
        x[i] = p[i];
    }
    string newsong;
    int song_num;
    cin.ignore();
    cout << "Enter song name: ";
    getline(cin, newsong);
    cout << "Enter song number: ";
    cin >> song_num;
    x[song_num - 1] = newsong;
    delete[] p;
    p = x;
}

void Favourite_Songs::DeleteSong()
{
    int songgnum;
    string *x = new string[size - 1];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Song No " << i + 1 << ": " << p[i] << endl;
    // }
    cout << "Enter the song number you want to delete: ";
    cin >> songgnum;

    for (int i = 0; i < (size-1); i++)
    {
        if (i==(songgnum-1))
            x[i]=p[i+1];
        else
            x[i]=p[i];
        
    }

    size--;
    
    // int j = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Song No  "<<i+1<<": "<<p[i]<<endl;
    // }
    // cout<<"Enter the song No you want to delete"<<endl;
    // cin>>songgnum;
    // for (int i = 0; i < songgnum-1; i++)
    // {
    //     x[i]=p[i];
 
    // }
    // for (int i = songgnum ; i < size; i++)
    // {
    //     x[i]=p[i];
    // }
    delete [] p;
    p=x;
    
    

}
void Favourite_Songs::printSong()
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Song No  "<<i+1<<" : "<<p[i]<<endl;
    }
    
   
}
//  Favourite_Songs::~Favourite_Songs()
// {
//     cout<<"GoodBye!"<<endl;
//     delete [] p;
// }
void Favourite_Songs::BackupSong()
{
    string * x;
    int y=size;
    x=new string[y + 1];
    for (int i = 0; i < y ; i++)
    {
        x[i]=p[i];
    }
    
}
void Favourite_Songs::updateSong()
{
    int song_num;
   string new_song;
   for (int i = 0; i < size; i++)
   {
     cout<<"Songs No : "<<i+1<<" "<<p[i]<<endl; 
   }
   cout<<"Enter Song No"<<endl;
   cin>>song_num;
   for (int i = 0; i < size; i++)
   {
     if (i==song_num)
     {
       cout<<"Enter new song"<<endl;
       cin>>new_song;
       p[song_num-1]=new_song;
     }
     
   }
}