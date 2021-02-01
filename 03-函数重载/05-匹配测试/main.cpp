#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//匹配规则：
//1、严格匹配，找到则调用。
//2、通过隐式转换寻求一个匹配，找到则调用。

void print(double a) {
	cout << "void print(double a)" << " a=" << a << endl;
}

void print(int a) {
	cout << "void print(int a)" << " a=" << a << endl;
}

int main() {

	print(1);			//输出 "void print(int a) a=1"
	print(1.1);			//输出 "void print(double a) a=1.1"
	print('a');			//输出 "void print(int a) a=97"
	print(1.11f);		//输出 "void print(double a) a=1.1"
	system("pause");
	return 0;
}