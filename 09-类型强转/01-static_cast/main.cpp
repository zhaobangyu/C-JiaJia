#include <iostream>
#include <windows.h>
using namespace std;

/*
	�﷨��ʽ��static_cast<type>(expression)
	���ó�������һ�������Ͽ�������ʽת����������һ�������ϾͿ��Ծ�̬ת����
*/

int main() 
{
	//˫����ʽ
	{
		int a = 3;
		float b = 5.5;
		a = static_cast<int>(b);
		b = static_cast<float>(a);
		cout << "a=" << a << endl;		//��� a=5
		cout << "b=" << b << endl;		//��� b=5

		int x = 10;
		int y = 3;
		float z = static_cast<float>(x) / y;
		cout << "z=" << z << endl;		//��� z=3.33333
	}

	//��������
	{
		void *p;
		int *q;
		//q = p; //err,�޷���void��ǿת
		//p = q;
		//q = static_cast<int*>(p);
		char *pp = static_cast<char*>(malloc(100));
	}
	system("pause");
	return 0;
}