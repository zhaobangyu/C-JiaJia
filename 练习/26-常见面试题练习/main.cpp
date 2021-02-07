#include <iostream>
#include <string>
#include <windows.h>
#include "myStatck.h"
using namespace std;


//题3-写一个能左值的函数
int& myMax(int &x, int &y)
{
	return x > y ? x : y;
}

//题4-写一个函数计算当参数为n(n很大)时的值 1-2+3-4+5-6+7......+n。
long fn(long n)
{
	if (n <= 0)
	{
		cout << "error: n must > 0" << endl;
		exit(1);
	}
	if (0 == n % 2)
		return (n >> 1) * (-1);
	else
		return (n >> 1) * (-1) + n;
}

//t5
int add_a(int n) {
	static int i = 100;
	i += n;
	return i;
}

int t10_1_Max(int *ia, int sz)
{
	return 0;
}

//int t10_1_Max(int *, int)	//error
//{
//	return 0;
//}

//t11
int t11_getTargetCharCount(char log) 
{
	int num=0, val=0;
	for (int i=0; i<8; i++)
	{
		val = log >> i;
		val &= 0x01;
		if (val == 1)
		{
			num++;
		}
	}
	return num;
}

int main() {
	//题1-const字符描述
	{
		const char c1 = 'a';
		const char *p1 = &c1;		//p1 指向可以修改，但内容不可以修改
		char const *p2 = &c1;		//同上

		char c2 = 'b';
		char * const p3 = &c2;			//p3 指向不可以修改，但内容可以修改
		const char * const p4 = &c1;	//p4 指向不可以修改，且内容也不可以修改
	}

	//题2-以下代码如果有错，请该正，并写出输出结果？
	{
		int nArrlength(400), i = 546;
		for (int i = 0; i < ~((int)0); i++)
			cout << nArrlength << endl;
		cout << i << endl;
	}

	//题3-写一个能左值的函数
	{
		int x = 0;
		int y = 10;
		myMax(x, y) += 10 + 20;
		cout << x << "," << y << endl;
	}

	//题4-写一个函数计算当参数为n(n很大)时的值 1-2+3-4+5-6+7......+n。
	{
		long value = fn(10);
		cout << "t4-" << value << endl;
	}

	//t5
	{
		int val1 = add_a(10);
		int val2 = add_a(10);
		cout << "t5:" << val1 << "," << val2 << endl;
	}

	//t6
	{
		const char * str1 = "abc";
		const char * str2 = "abc";
		cout << "t6:" << (str1 == str2) << endl;
	}

	//t7-写出判断ABCD四个表达式的是否正确, 若正确, 写
	//出经过表达式中 a的值。
	{
		//exmaples-1
		{
			int a = 4;
			a += (a++);
			cout << "t7-1:" << a << endl; //a = 9
		}

		//examples-2
		{
			int a = 4;
			a += (++a);
			cout << "t7-2:" << a << endl; //a = 10
		}

		//examples-3
		{
			int a = 4;
			//(a++) += a;	//error
			(++a) += a; //success
			cout << "t7-3:" << a << endl; //a = 10
		}

		//examples-4
		{
			int a = 4;
			(++a) += (a++);
			cout << "t7-4:" << a << endl; //a = 11
		}
	}

	//t8-下列程序的运行结果是
	{
		const char * str = "abc";
		const char * pstr = str;
		cout << "t8:" << pstr << endl;	//输出 abc
	}

	//t9-下列程序输出的结果是
	{
		int x = 10, y = 20;
		cout << "t9:" << (x > y) ? x : y;
		cout << endl;
	}

	//t10-算函数重载？还是重复声明？
	{

	}

	//t11-请编写一个 C 函数，该函数给出一个字节中被置1的位的个数。
	{
		//char ch;
		//printf("Enter a ch!\n");
		//scanf_s("%c", &ch);
		//int num = t11_getTargetCharCount(ch);
		//printf("累计输出-%d-个1字符!\n", num);
	}

	//t12-输入一个字符串，将其逆序后输出 。
	{
		string str("abcdefg");
		string strTmp(str.rbegin(),str.rend());
		cout << "t12:" << strTmp << endl;
	}

	/*t13-假设以数组Q[m]存放循环队列中的元素, 同时以
		rear和length分别指示环形队列中的队尾位置和队列中
		所含元素的个数。试给出该循环队列的队空条件和队满
		条件, 并写出相应的插入(enqueue)和删除(dlqueue)元
		素的操作。
	*/
	{
		cout << "t13-begin----------------------" << endl;
		myStatck mys;
		for (int i=0; i<10; i++)
		{
			mys.insertVal(i);
		}
		//输出数据
		mys.dis();

		//删除测试
		mys.delVal();
		mys.delVal();

		cout << "t13-Del----------------------" << endl;
		//输出数据
		mys.dis();
	}
		
	system("pause");
	return 0;
}