#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//��������ļ�����
	{
		cout << "��������ļ�����----" << endl;
		cout << __FILE__ << endl;
		cout << __LINE__ << endl;
	}

	//�жϴ�����C++���ﻹ��C��
	{
		cout << "�жϴ�����C++���ﻹ��C��----" << endl;
		if (__cplusplus) {
			cout << "C++����" << endl;
		}
		else {
			cout << "C����" << endl;
		}
	}

	//�ж�ϵͳ��16λ����32λ
	{
		//ָ�뷨
		{
			int *p = NULL;
			int size = sizeof(p);
			if (size == 2) {
				cout << "ָ�뷨-16λ" << endl;
			}
			else if (size == 4) {
				cout << "ָ�뷨-32λ" << endl;
			}
			else if (size == 8) {
				cout << "ָ�뷨-64λ" << endl;
			}
		}

		//��ָ�뷨
		{
			int a = ~0;
			if (a > 65536) {
				cout << "��ָ�뷨-32λ" << endl;
			}
			else {
				cout << "��ָ�뷨-16λ" << endl;
			}
		}
	}

	//�ڲ��õ�����������£���������������ֵ 
	{
		int a = 10;
		int b = 20;

		a = a + b;
		b = a - b;
		a = a - b;
		cout << "�������� a=" << a << " b=" << b << endl;


	}

	system("pause");
	return 0;
}