#include <iostream>
#include <windows.h>
#include <string>
#include "myString.h"
using namespace std;

/*
	ʵ�ּ�string��
	֪ʶ�㣺�����������������������������ำֵ��������
*/
int main() {
	//���ع�������ʵ��
	{
		myString s1("china");
		cout << "s1=" << s1.c_str() << endl;
		cout << "s1 _str address=" << s1.outPutAddress() << endl;
	}

	//���ؿ�����������ʵ��
	{
		myString s1("bobo");
		//ʾ��1
		myString s2(s1);
		cout << "s2=" << s2.c_str() << endl;
		cout << "s2 _str address=" << s2.outPutAddress() << endl;
	}

	//�����������=��ʵ��
	{
		myString s3("fofo");
		myString s4("gogo");

		//��ֵ�����
		s3 = s4;
		cout << "s3=" << s3.c_str() << endl;
		cout << "s3 _str address=" << s3.outPutAddress() << endl;
		cout << "s4=" << s4.c_str() << endl;
		cout << "s4 _str address=" << s4.outPutAddress() << endl;
	}

	//�����������+��ʵ��
	{
		myString s5("fofo");
		myString s6("gogo");

		//��ֵ�����
		myString s7 = s5 + s6;
		cout << "s7=" << s7.c_str() << endl;
	}

	//�����������>,<,==��ʵ��
	{
		myString s8("abc");
		myString s9("efg");

		if (s8 > s9) {
			cout << "s8 > s9" << endl;
		}
		else if (s8 < s9) {
			cout << "s8 < s9" << endl;
		}
		else {
			cout << "s8 == s9" << endl;
		}
	}

	//�����������[]��ʵ��
	{
		myString s9("123456789");
		cout << "s9-5:" << s9[3] << endl;
		
		s9[5] = '#';
		cout << "s9:" << s9.c_str() << endl;
	}
	system("pause");
	return 0;
}