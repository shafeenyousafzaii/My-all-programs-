#include <iostream>
#include <cstring>
using namespace std;
int check_password();
int main(){
 string name, password;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter a password: ";
    getline(cin, password);

    while (check_password(password))
    {
        cout << "Enter a valid password: ";
        getline(cin, password);
    }

    string confirmation;
    cout << "Enter the password again to confirm: ";
    getline(cin, confirmation);

    if (password == confirmation)
    {
        cout << "You know what? You can be a great programmer. Keep Coding!" << endl;
    }
    else
    {
        cout << "Passwords do not match." << endl;
    }
return 0;
}

int check_password(char password)
{
    int len = password.length();
    int flag1 = 0, flag2 = 0;
    
    
    if (len == 8) {
        flag1 = 1;
    }
    else {
        cout<<"Password must be 8 characters long.";
        return 0;
    }
    
    for (int i=0; i<len; i++) {
        if (password[i] == '%' || password[i] == '!' || password[i] == '*' ||
            password[i] == '^' || password[i] == '&') {
            flag2 = 1;
            break;
        }
    }
    
    if (flag2 == 0) {
        cout<<"Password must contain at least one special symbol (%, !, *, ^, &)";
    }
        return 0;
    
 }