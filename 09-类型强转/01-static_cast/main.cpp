#include <iostream>
#include <windows.h>
using namespace std;

/*
	语法格式：static_cast<type>(expression)
	适用场景：在一个方向上可以作隐式转换，在另外一个方向上就可以静态转换。
*/

int main() 
{
	//双向隐式
	{
		int a = 3;
		float b = 5.5;
		a = static_cast<int>(b);
		b = static_cast<float>(a);
		cout << "a=" << a << endl;		//输出 a=5
		cout << "b=" << b << endl;		//输出 b=5

		int x = 10;
		int y = 3;
		float z = static_cast<float>(x) / y;
		cout << "z=" << z << endl;		//输出 z=3.33333
	}

	//单向隐匿
	{
		void *p;
		int *q;
		//q = p; //err,无法将void型强转
		//p = q;
		//q = static_cast<int*>(p);
		char *pp = static_cast<char*>(malloc(100));
	}
	system("pause");
	return 0;
}