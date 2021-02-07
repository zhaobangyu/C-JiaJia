#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
	友元类：类A是类B的友元类，则A就可以访问B的所有成员（成员函数，数据成员）。
		   （类A，类B无继承关系）
*/

class A
{
public:
	A()
	{
		x = 100;
		y = 200;
	}
	~A()
	{

	}
	friend class B;
private:
	int x;
	int y;
};

class B
{
public:
	B(){

	}

	~B()
	{

	}

	void dis() {
		cout << "a_x:" << a.x << " a_y:" << a.y << endl;
	}

	A a;
};

int main() {
	B b;
	b.dis();
	system("pause");
	return 0;
}