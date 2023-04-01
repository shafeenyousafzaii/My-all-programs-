#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    fstream FileName;
    FileName.open("FileName2", ios::in);
    if (!FileName) {
        cout<<"File doesn't exist.";
    }
    else {
        char x;
      //  string line;
       while (1) {
            FileName>>x;

            if(FileName.eof())
                break;
            cout<<x;
        }

      /*  while(getline(FileName,line))
        {
          cout << line << endl;
        }*/
    }
    FileName.close();
    return 0;
}
