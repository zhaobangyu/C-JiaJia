#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//C++ 允许，
//int 到 long、double，
//double 到 int、float，
//int 到 short、char
//等隐式类型转换。遇到这种情形，则会引起二义性。

//例如下面的代码，调用1传入int值，
//C++允许int到long、double，但是机算机无法进行选择，所以会报错。
//double 到 int、float 与 int 到 short、char 效果一样。
//所以调用1处报错，无法编绎通过。


//方法1
void print(long a) {
	cout << "void print(long a)" << " a=" << a << endl;
}

//方法2
void print(double a) {
	cout << "void print(double a)" << " a=" << a << endl;
}

int main() {

	//调用1
	//print(10);
	system("pause");
	return 0;
}