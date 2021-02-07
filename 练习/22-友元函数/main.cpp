
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
	友元函数：不是类的成员函数，是一个类外的函数，但是可以访问类所有成员
	注：友元函数在类中的声明位置不受public,private,protected的影响。
*/

class A
{
public:
	A(int in_x, int in_y)
		:x(in_x),y(in_y)
	{

	}

	~A()
	{

	}

	friend void fun(A inA);
private:
	int x;
	int y;
	
};

void fun(A inA) 
{
	cout << "x:" << inA.x << " y:" << inA.y << endl;
}

int main() {
	A a(100,200);
	fun(a);
	system("pause");
	return 0;
}
