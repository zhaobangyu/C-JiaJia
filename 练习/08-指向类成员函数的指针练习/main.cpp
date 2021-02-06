#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class A
{
public:
	A(string name) {
		this->name = name;
		pfArray[0] = &A::fun1;
		pfArray[1] = &A::fun2;
		pfArray[2] = &A::fun3;
	}

	void select(int val, int index)
	{
		(this->*pfArray[index])(val);
	}

	void dis() {
		cout << name << endl;
	}
	string name;
	enum {
		num=3
	};
	//类指针数组
	void(A::*pfArray[num])(int);
	void(A::*pf[4])(int);

private:
	void fun1(int val) {
		cout << "fun1()" << val << endl;
	}
	void fun2(int val) {
		cout << "fun2()" << val << endl;
	}
	void fun3(int val) {
		cout << "fun3()" << val << endl;
	}
};

int main() {
	//指向普通函数的使用
	{
		A a1("a1"), a2("a2");
		void(A::*pf)() = &A::dis;
		(a1.*pf)();	//输出 a1
		(a2.*pf)();	//输出 a2
	}

	//类指针数组的使用
	{
		A a3("a3");
		a3.select(100,0);
		a3.select(101,1);
		a3.select(102,2);
	}
	system("pause");
	return 0;
}