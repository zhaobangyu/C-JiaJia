#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
/*
	分别用指针数组和二维数组生成二维空间，存储数据并释放。比如，数据如下：
	a
	abc
	agcdefg
*/
int main() {

	//指针数组
	{
		const char **p = new const char *[3]{"a","abc","agcdefg"};
		for (int i = 0; i < 3; i++) {
			cout << p[i] << endl;
		}
	}
	
	//二维数组
	{
		int(*p)[2] = new int[2][2]{ {100,101},{200,201} };
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << p[i][j] << endl;
			}
		}
	}
	system("pause");
	return 0;
}