
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
	��Ԫ������������ĳ�Ա��������һ������ĺ��������ǿ��Է��������г�Ա
	ע����Ԫ���������е�����λ�ò���public,private,protected��Ӱ�졣
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
