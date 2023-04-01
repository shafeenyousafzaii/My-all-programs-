#include<iostream>
#include<iomanip>
#include<string>
#include"Task1.h"
using namespace std;
class Favourite_Songs
{
private:
    int size;
    
    string *p;
public:
    Favourite_Songs();
    ~Favourite_Songs();
    void addSong();
    void printSong();
    void BackupSong();
    void DeleteSong();
    void updateSong();
    void getter();

    
};

#include"Task1.h"
using namespace std;
Favourite_Songs::Favourite_Songs()
{
    size=0;
    p=new string[size];
    p[size]="empty";
    // for (int i = 0; i < size; i++)
    // {
    //     p[i]=" ";
    // }
    
}
// void Favourite_songs::getter()
// {
//     cout<<size
// }
void Favourite_Songs::addSong()
{
    string *x;
    size++;
    cout<<size;
    x=new string[size];
    for (int i = 0; i < size ; i++)
    {
        x[i]=p[i];
    }
    string newsong;
    int song_num;
    getchar();
    cout<<"Enter  song Name : ";
    getline(cin,newsong);
    cout<<endl;
    cout<<"Enter Song Number"<<endl;
    cin>>song_num;
    for (int i = 0; i < size ; i++)
    {
        
            x[i]=newsong;
        
    }
    // for (int i = 0; i < size; i++)
    // {
    //     p[i]=x[i];
    // }
    delete [] p;
    p=x;
    
    
}
void Favourite_Songs::DeleteSong()
{
    int songgnum;
    string *x;
    x=new string[size-1];
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Song No  "<<i+1<<": "<<p[i]<<endl;
    }
    cout<<"Enter the song No you want to delete"<<endl;
    cin>>songgnum;
    for (int i = 0; i < songgnum; i++)
    {
        x[i]=p[i];
 
    }
    for (int i = songgnum + 1; i < size; i++)
    {
        x[i]=p[i];
    }
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
 Favourite_Songs::~Favourite_Songs()
{
    cout<<"GoodBye!"<<endl;
    delete [] p;
}
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
     }
     
   }
}
int main()
{

    Favourite_Songs o1;
int x;
    do
    {
        
        cout<<"1. Add a song \n2. Delete a song \n3. Update a song \n4. Print all songs \n5. Create Backup of Songs \n6. Exit."<<endl;
        cin>>x;
        if (x==1)
        {
            o1.addSong();
        }
        else if (x==2)
        {
            o1.DeleteSong();
        }
        else if(x==3)
        {
            o1.updateSong();
        }        
        else if(x==4)
        {
            o1.printSong();
        }
        else if(x==5)
        {
            Favourite_Songs backup=o1;// 
            o1.printSong();
        }

    } while (x!=6);
    
    return 0;
}
