#include <iostream>
#include <string>
#include <windows.h>
#include "myStatck.h"
using namespace std;


//��3-дһ������ֵ�ĺ���
int& myMax(int &x, int &y)
{
	return x > y ? x : y;
}

//��4-дһ���������㵱����Ϊn(n�ܴ�)ʱ��ֵ 1-2+3-4+5-6+7......+n��
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
	//��1-const�ַ�����
	{
		const char c1 = 'a';
		const char *p1 = &c1;		//p1 ָ������޸ģ������ݲ������޸�
		char const *p2 = &c1;		//ͬ��

		char c2 = 'b';
		char * const p3 = &c2;			//p3 ָ�򲻿����޸ģ������ݿ����޸�
		const char * const p4 = &c1;	//p4 ָ�򲻿����޸ģ�������Ҳ�������޸�
	}

	//��2-���´�������д����������д����������
	{
		int nArrlength(400), i = 546;
		for (int i = 0; i < ~((int)0); i++)
			cout << nArrlength << endl;
		cout << i << endl;
	}

	//��3-дһ������ֵ�ĺ���
	{
		int x = 0;
		int y = 10;
		myMax(x, y) += 10 + 20;
		cout << x << "," << y << endl;
	}

	//��4-дһ���������㵱����Ϊn(n�ܴ�)ʱ��ֵ 1-2+3-4+5-6+7......+n��
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

	//t7-д���ж�ABCD�ĸ����ʽ���Ƿ���ȷ, ����ȷ, д
	//���������ʽ�� a��ֵ��
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

	//t8-���г�������н����
	{
		const char * str = "abc";
		const char * pstr = str;
		cout << "t8:" << pstr << endl;	//��� abc
	}

	//t9-���г�������Ľ����
	{
		int x = 10, y = 20;
		cout << "t9:" << (x > y) ? x : y;
		cout << endl;
	}

	//t10-�㺯�����أ������ظ�������
	{

	}

	//t11-���дһ�� C �������ú�������һ���ֽ��б���1��λ�ĸ�����
	{
		//char ch;
		//printf("Enter a ch!\n");
		//scanf_s("%c", &ch);
		//int num = t11_getTargetCharCount(ch);
		//printf("�ۼ����-%d-��1�ַ�!\n", num);
	}

	//t12-����һ���ַ����������������� ��
	{
		string str("abcdefg");
		string strTmp(str.rbegin(),str.rend());
		cout << "t12:" << strTmp << endl;
	}

	/*t13-����������Q[m]���ѭ�������е�Ԫ��, ͬʱ��
		rear��length�ֱ�ָʾ���ζ����еĶ�βλ�úͶ�����
		����Ԫ�صĸ������Ը�����ѭ�����еĶӿ������Ͷ���
		����, ��д����Ӧ�Ĳ���(enqueue)��ɾ��(dlqueue)Ԫ
		�صĲ�����
	*/
	{
		cout << "t13-begin----------------------" << endl;
		myStatck mys;
		for (int i=0; i<10; i++)
		{
			mys.insertVal(i);
		}
		//�������
		mys.dis();

		//ɾ������
		mys.delVal();
		mys.delVal();

		cout << "t13-Del----------------------" << endl;
		//�������
		mys.dis();
	}
		
	system("pause");
	return 0;
}