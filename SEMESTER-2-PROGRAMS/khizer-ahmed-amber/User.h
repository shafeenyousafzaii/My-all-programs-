#include"Dawaii.h"
class User :public Dawaii
{
	string username;
	string password;
	int balance;
public:
	User();
	void registers();
	void userLogin();
	void forget();
	string getUser();
};