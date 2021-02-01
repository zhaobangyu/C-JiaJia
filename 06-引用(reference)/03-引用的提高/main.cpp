#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	
	//提高1：可以定义指针的引用，但不能定义引用的引用
	{
		int a = 10;
		int* p = &a;
		int*& rp1 = p;	//正确-可以定义指针的引用
		
		int& r = a;
		//int&& rr = r;	//错误-不能定义引用的引用
	}

	//提高2：可以定义指针的指针（二级指针），但不能定义引用的指针
	{
		int a = 10;
		int* p = &a;
		int** pp = &p;	//正确-可以定义指针的指针
		//输出
		printf("提高2 a=%d p=%d pp=%d\n",a,*p,**pp);

		int& r = a;
		//int&* pr = &r;	//错误-不能定义引用的指针
	}

	//提高3：可以定义指针数组，但不能定义引用数组，可以定义数组引用
	{
		int a, b, c;
		int* parr[] = {&a, &b, &c};	//正确-可以定义指针数组
		//int& rarr[] = {a, b, c};	//错误-不能定义引用数组
		int arr[] = {a,b,c};
		int (&rarr2)[3] = arr;		//正确-可以定义数组引用
	}

	//提高4：可以定义指针数组，但不能定义引用数组，可以定义数组引用
	{
		int a, b, c;
		int* parr[] = { &a, &b, &c };	//正确-可以定义指针数组
		//int& rarr[] = {a, b, c};	//错误-不能定义引用数组
		int arr[] = { a,b,c };
		int(&rarr2)[3] = arr;		//正确-可以定义数组引用
	}
	system("pause");
	return 0;
}