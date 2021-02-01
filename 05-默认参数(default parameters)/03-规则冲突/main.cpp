#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
		一个函数，不能既作重载，又作默认参数的函数。当你少写一个参数时，系统无法确认是重载
	还是默认参数，此时往往会产生 ambiguous的编绎错误。

		当两者要实现同样的功能时，优先选用默认参数，相比较重载 而言，默认参数更有实用价值，
	默认更接近生活的实际，比如人的体温，默认是36.8一样，毕竟高烧不是一种常态。
*/

//方法1
void print(int a) {

}

//方法2
void print(int a, int b = 10) {

}

int main() {
	//调用1
	//print(10);
	//调用2
	print(10,20);
	system("pause");
	return 0;
}