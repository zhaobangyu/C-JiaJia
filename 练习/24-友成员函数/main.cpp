#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
	友成员函数：使类B中的成员函数成为类A的友元函数，这样类B的该函数就可以访问类A的所有成员
*/
class A;

class B
{
public:
	B()
	{
	}
	~B()
	{

	}

	void print(A a);
	void dis(A a);
};

class A
{
public:
	A()
	{
		x = 100;
	}
	~A()
	{

	}
	
	friend void B::dis(A a);
private:
	int x;
};

void B::print(A a)
{
	//cout << a.x << endl;	//error 无法访问
}

void B::dis(A a)
{
	cout << a.x << endl;
}


int main() {
	A a;
	B b;
	b.dis(a);
	system("pause");
	return 0;
}