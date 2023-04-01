#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("sample.txt");
    string line; 
    while (true)
    {
        getline(cin,line);
        fout<<line<<endl;
        if (line!="-1")
        {
            fout<<line<<endl;
        }
        else
        {
            break;
        }
        fout.close();
        ifstream fin;
        fin.open("sample.txt");
        while (getline(cin,line))
        {
            cout<<line<<endl;
        }
        fin.close();
        
    }
    
}