#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//示例1，单变量释放操作
	{
		int *p = new int;
		delete p;
	}

	//示例2，数组释放操作
	{
		//1维数组
		int *p1 = new int[10];
		delete p1;

		//2维数组
		int(*p2)[3] = new int[2][3];
		delete []p2;

		//3维数组
		int(*p3)[3][4] = new int[2][3][4];
		delete[]p3;
	}
	system("pause");
	return 0;
}