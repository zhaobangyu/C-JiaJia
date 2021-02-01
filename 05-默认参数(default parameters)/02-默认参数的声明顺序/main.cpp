#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//默认规则 
//1、默认的顺序，是从右向左，不能跳跃。
//2、函数声明和定义一体时，默认参数在定义（声明）处。声明在前，定义在后，默认参数只能在声明处。
//3、默认值可以是常量，全局变量，或是一个函数
//4、实参个数+默认参数的个数 >= 形参个数
//注：方法1，print(int a, int b=2, int c=3),中的a为形参，b，c为默认参数
//调用2处，1为实参，所以最终参数个数=1+2 >= 3

//方法1
void print(int a, int b=2, int c=3);
////方法2
//void print(int a=1, int b=2, int c);
////方法3
//void print(int a=1, int b, int c=3);

void print(int a, int b, int c) {
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
}

int main() {
	////调用1
	//print();
	//调用2
	print(1);
	//调用3
	print(1,2,3);
	system("pause");
	return 0;
}