#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class A
{
public:
	int x;
	int y;
	int z;

	A(int in_x, int in_y, int in_z) 
		:x(in_x),y(in_y),z(in_z)
	{
	}

	void dis_A() {
		cout << "A " << "x:" << x << " y:" << y << " z:" << z << endl;
	}
};

class B:virtual public A
{
public:
	B(int in_x, int in_y, int in_z)
		:A(in_x, in_y, in_z)
	{
	}

	void dis_B() {
		cout << "B " << "x:" << x << " y:" << y << " z:" << z << endl;
	}
};

class C :virtual public A
{
public:
	C(int in_x, int in_y, int in_z)
		:A(in_x, in_y, in_z),x(in_x+100)
	{
	}
	int x;
	void dis_C() {
		cout << "C " << "A_x:" << x << " y:" << y << " z:" << z << endl;
	}
};

class D : public B, public C
{
public:
	D(int in_x, int in_y, int in_z)
		:B(in_x, in_y, in_z),C(in_x, in_y, in_z),A(in_x, in_y, in_z)
	{
	}

	void dis_D() {
		cout << "C-A " << "x:" << x << " y:" << y << " z:" << z << endl;
	}
};


int main() {
	D d(100,100,100);
	d.dis_C();
	system("pause");
	return 0;
}