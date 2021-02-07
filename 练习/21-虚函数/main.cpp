#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class A
{
public:
	virtual void dis() 
	{
		cout << "A-dis" << endl;
	}
};

class B: public A
{
public:
	virtual void dis()
	{
		cout << "B-dis" << endl;
	}
};



int main() {
	B b;
	b.dis();

	A *pA = &b;
	pA->dis();
	system("pause");
	return 0;
}