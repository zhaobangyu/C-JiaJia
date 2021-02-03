#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
	在C++中，我们应不再使用宏函数，而使用内联函数。
*/

//C中的宏函数
#define SQR(x)((x)*(x))

//普通函数
int sqr_1(int x) 
{
	return x*x;
}

//C++中的内联函数
inline int sqr_2(int x) 
{
	return x*x;
}

int main() {

	//普通使用方式
	{
		cout << "宏函数,SQR=" << SQR(10) << endl;
		cout << "普通函数,sqr=" << sqr_1(20) << endl;
		cout << "内联函数,sqr=" << sqr_2(30) << endl;
	}

	//宏定义计算不正确的场景
	{
		int a = 5;
		int b = 5;
		int result_a = SQR(a++);
		int result_b = sqr_1(b++);
		cout << "a=" << a << " result_a=" << result_a << endl;	//输出 a=7 result_a=25
		cout << "b=" << b << " result_b=" << result_b << endl;	//输出 b=6 result_b=25
		//结论：宏定义使用了2次a++，导致a的值变成了7，而内联没有这个问题
	}
	
	system("pause");
	return 0;
}