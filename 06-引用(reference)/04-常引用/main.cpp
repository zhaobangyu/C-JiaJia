#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {

	//知识1：常用于取代 #define 定义的宏常量
	{
		const int a = 100;
		int b = 300;
		int c = a + b;
		cout << "c=" << c << endl;	//输出400
	}

	//知识2：const对象，只能声明为const引用
	{
		const int a = 100;
		//int& b = a;		//错误-修改为 “const int& b = a;”即可
		const int& c = a;	//正确
	}

	//知识3：no-const对象,即可以声明为const引用，也可以声明为no-const引用，
	//		 声明为const引用，则不可以通过const引用修改数据
	{
		int a = 100;
		int& ra1 = a;			//正确
		const int& ra2 = a;		//正确
		//ra2 = 200;			//错误：声明为const引用，不能对该引用修改
	}

	//知识3：const的特殊用法
	{
		int a = 100;
		int& ra1 = a;				//正确
		//用法1：给引用赋值表达式
		{
			//int& ra2 = a + 5;			//错误
			const int& ra3 = a + 5;		//正确
		}

		// 用法2：引用不同类型的值
		{
			double dVal = 1.23;
			//int& ra4 = dVal;			//错误
			const int& ra5 = dVal;		//正确
			//输出数据
			printf("const引用不同类型的值 ra5=%d \n", ra5);	//输出1
		}
	}
	system("pause");
	return 0;
}