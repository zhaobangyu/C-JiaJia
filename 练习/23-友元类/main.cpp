#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
	��Ԫ�ࣺ��A����B����Ԫ�࣬��A�Ϳ��Է���B�����г�Ա����Ա���������ݳ�Ա����
		   ����A����B�޼̳й�ϵ��
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