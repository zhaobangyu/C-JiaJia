#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class A
{
public:
	A(int val) {
		x = val;
	}

	void dis() {
		cout << "A x=" << x << endl;
	}

	int x;
};

class B : public A
{
public:
	B(int val) 
		:A(0)
	{
		y = val;
	}

	void print() {
		cout << "B y=" << y << endl;
	}
	int y;
};

int main() {
	A a1(10);
	B b1(20);

	a1 = b1;
	a1.dis();
	b1.print();

	system("pause");
	return 0;
}