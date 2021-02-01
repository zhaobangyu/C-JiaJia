#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//方法1
void func(int a) {
	cout << "void func(int a)" << endl;
}

//方法2
void func(char a) {
	cout << "void func(char a)" << endl;
}

//方法3
void func(int a, char b) {
	cout << "void func(int a, char b)" << endl;
}

//方法4
void func(char a, int b) {
	cout << "void func(char a, int b)" << endl;
}

//方法5
//注：与方法1冲突
//解释：需满足 参数个数不同 参数的类型不同 参数顺序不同
//void func(int a) {
//
//}

//方法6
//注：与方法1冲突
//解释：返回值类型，不作为重载的标准
//int func(int a) {
//
//}

int main() {
	system("pause");
	return 0;
}