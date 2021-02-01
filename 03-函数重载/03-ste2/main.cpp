#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//注：C++致力于简化编程，通过函数重载来达到简化编程的目的。

int myAbs(int a) {
	return a > 0 ? a : -a;
}

double myAbs(double a) {
	return a > 0 ? a : -a;
}

int main() {
	cout << myAbs(1) << endl;		//输出	1
	cout << myAbs(1.23) << endl;	//输出	1.23
	system("pause");
	return 0;
}