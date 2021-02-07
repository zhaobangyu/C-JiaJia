#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//输出代码文件与行
	{
		cout << "输出代码文件与行----" << endl;
		cout << __FILE__ << endl;
		cout << __LINE__ << endl;
	}

	//判断代码由C++编绎还是C编
	{
		cout << "判断代码由C++编绎还是C编----" << endl;
		if (__cplusplus) {
			cout << "C++编绎" << endl;
		}
		else {
			cout << "C编绎" << endl;
		}
	}

	//判断系统是16位还是32位
	{
		//指针法
		{
			int *p = NULL;
			int size = sizeof(p);
			if (size == 2) {
				cout << "指针法-16位" << endl;
			}
			else if (size == 4) {
				cout << "指针法-32位" << endl;
			}
			else if (size == 8) {
				cout << "指针法-64位" << endl;
			}
		}

		//非指针法
		{
			int a = ~0;
			if (a > 65536) {
				cout << "非指针法-32位" << endl;
			}
			else {
				cout << "非指针法-16位" << endl;
			}
		}
	}

	//在不用第三方的情况下，交换两个参数的值 
	{
		int a = 10;
		int b = 20;

		a = a + b;
		b = a - b;
		a = a - b;
		cout << "交换数据 a=" << a << " b=" << b << endl;


	}

	system("pause");
	return 0;
}