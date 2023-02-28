#include <iostream>
using namespace std;

class ptrMemberVarType
{
int lenP;
int *p;

public:
ptrMemberVarType(int, int);
ptrMemberVarType(const ptrMemberVarType&);
~ptrMemberVarType();
void setVal(int);
void printVal() const;
};

ptrMemberVarType::ptrMemberVarType(int size, int val)
{
 lenP = size;
 p = new int[lenP];
 for(int i=0;i<lenP;i++)
    p[i]= val;
}

ptrMemberVarType::ptrMemberVarType(const ptrMemberVarType& obj)
{
 lenP = obj.lenP;
 p = new int[lenP];
 for(int i=0;i<lenP;i++)
    p[i]= obj.p[i];
}
ptrMemberVarType::~ptrMemberVarType()
{
delete [] p;
}

void ptrMemberVarType::printVal() const
{

for(int i=0;i<lenP;i++)
   cout << p[i] << " ";
cout << endl;
}

void ptrMemberVarType::setVal(int val)
{

for(int i=0;i<lenP;i++)
   p[i] = val;

}
int main()
{

ptrMemberVarType objectOne(4,1);
ptrMemberVarType objectTwo(4,2);
ptrMemberVarType objectThree(objectOne);

cout << "Using objOne" << endl;
objectOne.printVal();
cout << "Using objTwo" << endl;
objectTwo.printVal();

ptrMemberVarType objectThree(objectTwo);

cout << "Using objThree" << endl;
objectThree.printVal();

objectTwo.setVal(3);

cout << "Using objTwo" << endl;
objectTwo.printVal();
cout << "Using objThree" << endl;
objectThree.printVal();


return 0;
}
