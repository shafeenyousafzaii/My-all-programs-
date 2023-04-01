#include<iostream>
#include<iomanip>
#include<string>
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

