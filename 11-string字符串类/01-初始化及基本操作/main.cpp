#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

/*
	string �� C++ �д����ַ������࣬�Ƕ�C�������ַ��������ݺ���Ϊ�İ�װ��ʹ
���ַ����Ĵ����������á�
*/

int main()
{
	//��ֵ�����
	{
		string str = "china";
		cout << str << endl;	//��� china

		str = "canada";
		cout << str << endl;	//��� canada
	}

	//��������
	{
		//cout << "����������:";
		//string str;
		//cin >> str;		//space(�ո�)������ݻᱻ�ض�
		//cout << "������:" << str << endl;
		//cout << "str.size:" << str.size() << endl;
	}

	//�������ո񱻽ضϵ�����
	{
		cout << "����������(����ո�ض�����):";
		string str;
		getline(cin, str);
		cout << "������:" << str << endl;
	}

	//string ת char
	{
		string str = "1234567";
		char buf[32];
		strcpy_s(buf,sizeof(buf),str.c_str());
		cout << "buf:" << buf << endl;	//��� 1234567
		//sizeof ������ڴ��С
		//strlen ʵ��ռ�õ��ڴ��С
		cout << "sizeof:" << sizeof(buf) << " strlen:" << strlen(buf) << endl;	//��� sizeof:32 strlen:7
	}
	system("pause");
	return 0;
}