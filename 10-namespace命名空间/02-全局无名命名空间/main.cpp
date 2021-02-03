#include <iostream>
#include <windows.h>
using namespace std;

/*
	C++ 在 C语言的基础之上，首次以语法的行式，确立了全局无命名空间的存在和使用方法。
*/

int var = 100;
void func() {
	cout << "func" << endl;
}

int main()
{
	int var = 200;
	cout << "main var=" << var << endl;			//输出 200
	cout << "global var=" << ::var << endl;		//输出 100

	func();		//输出 func
	::func();	//输出 func
	system("pause");
	return 0;
}