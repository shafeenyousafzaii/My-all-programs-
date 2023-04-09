#include"Dawaii.h"

class admin :public Dawaii
{
	string username;
	string password;
public:
	admin();
	void login();
	int addBrand();
	int addCategory();
	int deleteCategory();
	int addProduct();
	int deleteProduct();
	int modifyProduct();
	int deleteUser();
};

