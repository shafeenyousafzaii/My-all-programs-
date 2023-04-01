#include<iostream>
#include<fstream>
using namespace std;
int main() {
    fstream FileName;
    FileName.open("FileName", ios::in);
    string line;
    if (!FileName) {
        cout<<" Error while reading the file ";
    }
    else {
      cout<<"File created and data got written to file" << endl;
      FileName>>line;
      //getline(FileName, line);
      cout << line << endl;
      FileName.close();
    }
    return 0;
}
