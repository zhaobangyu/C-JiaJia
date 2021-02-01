#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//以交换数据为例子

//方法1
//结果：无法进行修改，因为a，b为形参
void swapByValue(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//方法2
//结果：交换成功，需要新开辟1个int的空间
void swapByPtr1(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

//方法3
//结果：交换成功，需要新开辟*pa和*pb的空间
void swapByPtr2(int *pa, int *pb) {
	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pb;
}

//方法4
//结果：交换成功，不需要开辟空间，完美
void swapByReferenc(int &ra, int &rb) {
	ra ^= rb;
	rb ^= ra;
	ra ^= rb;
}

//方法5-字符交换
//结论:交换失败
void swapCharByPtr1(char *p, char *q) {
	char * t = p;
	p = q;
	q = t;
}

//方法6-字符交换
//结论:交换成功
void swapCharByPtr2(char **p, char **q) {
	char * t = *p;
	*p = *q;
	*q = t;
}

//方法7-字符交换
//结论:交换成功，平级交换
void swapCharByReferenc(char * &p, char *&q) {
	char * t = p;
	p = q;
	q = t;
}

int main() {
	//方法1 swapByValue 调用 
	{
		int a1 = 10;
		int b1 = 20;
		//交换数据
		swapByValue(a1, b1);
		//输出数据
		printf("a1=%d b1=%d\n", a1, b1);	//失败，输出 a1 = 10 b1 = 20
	}

	//方法2 swapByPtr1 调用 
	{
		int a2 = 10;
		int b2 = 20;
		//交换数据
		swapByPtr1(&a2, &b2);
		//输出数据
		printf("a2=%d b2=%d\n", a2, b2);	//成功，输出 a2 = 20 b2 = 10
	}

	//方法3 swapByPtr2 调用 
	{
		int a3 = 10;
		int b3 = 20;
		//交换数据
		swapByPtr2(&a3, &b3);
		//输出数据
		printf("a3=%d b3=%d\n", a3, b3);	//成功，输出 a3 = 20 b3 = 10
	}

	//方法4 swapByPtr2 调用 
	{
		int a4 = 10;
		int b4 = 20;
		//交换数据
		swapByReferenc(a4, b4);
		//输出数据
		printf("a4=%d b4=%d\n", a4, b4);	//成功，输出 a4 = 20 b4 = 10
	}

	//方法5-字符交换 swapCharByPtr1 调用 
	{
		char p[] = "a";
		char q[] = "b";

		char *p1 = p;
		char *q1 = q;

		//交换数据
		swapCharByPtr1(p1, q1);
		//输出数据
		printf("p1=%c q1=%c\n", *p1, *q1);	//失败，输出 p1 = a q1 = b
	}

	
	//方法6-字符交换 swapCharByPtr1 调用 
	{
		char p[] = "a";
		char q[] = "b";

		char *p2 = p;
		char *q2 = q;

		//交换数据
		swapCharByPtr2(&p2, &q2);
		//输出数据
		printf("p2=%c q2=%c\n", *p2, *q2);	//成功，输出 p2 = b q2 = a
	}

	//方法7-字符交换 swapCharByReferenc 调用 
	{
		char p[] = "a";
		char q[] = "b";

		char *p3 = p;
		char *q3 = q;

		//交换数据
		swapCharByReferenc(p3, q3);
		//输出数据
		printf("p3=%c q3=%c\n", *p3, *q3);	//成功，输出 p2 = b q2 = a
	}
	system("pause");
	return 0;
}