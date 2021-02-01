#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	
	//C语言
	{
		int *p = (int*)malloc(sizeof(int));
		*p = 100;
		cout << "C p=" << *p << endl;	//输出 C p=100
		free(p);
	}

	//C++语言
	{
		//方式1(只new不初始化值)
		int *p1 = new int;
		*p1 = 100;

		//方式2(初始化值)
		int *p2 = new int(100);	

		//创建int指针
		int **p3 = new int *;
		int p3_val = 200;
		*p3 = &p3_val;

		cout << "C++ p1=" << *p1 << " p2=" << *p2 << " p3=" << p3 << endl;
		//输出 C++ p1=100 p2=100 p3=000001E6EF592A10
	}

	system("pause");
	return 0;
}