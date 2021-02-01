#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Comp {
	float real;
	float image;
};

Comp operator+(Comp a, Comp b) {
	Comp c;
	c.real = a.real + b.real;
	c.image = a.image + b.image;
	return c;
}

int main() {
	//普通使用
	{
		int a = 3;
		int b = 2;
		//普通的运算符
		int c = a + b;
	}

	//结构体相加
	{
		Comp a = {1,2};
		Comp b = { 1,3 };
		//调用方式一
		Comp c = a + b;
		cout << "c.real= " << c.real << ", c.image=" << c.image << endl;

		//调用方式二
		//注：本质与方法一样
		Comp d = operator+(a,b);
		cout << "d.real= " << d.real << ", d.image=" << d.image << endl;
	}
	system("pause");
	return 0;
}