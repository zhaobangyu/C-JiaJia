#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
	�ѳ�Ա������ʹ��B�еĳ�Ա������Ϊ��A����Ԫ������������B�ĸú����Ϳ��Է�����A�����г�Ա
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
	//cout << a.x << endl;	//error �޷�����
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