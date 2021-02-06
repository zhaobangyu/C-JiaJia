#include "myString.h"
#include <iostream>
#include <string.h>
using namespace std;

myString::myString()
{
	_str = new char[1];
	_str[0] = '\0';
	cout << "myString ������ 1" << endl;
}

myString::myString(char *str)
{
	//��ȡ�����ַ�����
	int len = strlen(str) + 1;
	//�����ڴ�ռ�
	_str = new char[len];
	//��ʼ������
	memset(_str, 0, len);
	//��������
	strcpy_s(_str, len, str);
	cout << "myString ������ 2" << endl;
}

myString::~myString()
{
	delete[]_str;
	cout << "myString ������" << endl;
}

/*
	����������
	ע��ʹ��ϵͳĬ�ϵĿ��������������տ���������Ϊǳ������
		Ҫʵ�����������ʵ�֡�
*/
myString::myString(const myString & another)
{
	cout << "myString ����������" << endl;
	int len = strlen(another._str) + 1;
	_str = new char[len];
	memset(_str,0,len);
	strcpy_s(_str, len, another._str);
}

//��ֵ���������
myString& myString::operator=(const myString & another)
{
	cout << "myString ��ֵ���������" << endl;
	if (this == & another) {
		return *this;
	}

	delete[] _str;
	int len = strlen(another._str)+1;
	_str = new char[len];
	memset(_str, 0, len);
	strcpy_s(_str, len, another._str);
	return *this;
}

//+���������
myString myString::operator+(const myString & another)
{
	myString tm;
	delete[] tm._str;

	int len = strlen(_str) + strlen(another._str)+1;
	tm._str = new char[len];
	memset(tm._str, 0, len);
	strcat_s(tm._str, len, _str);
	strcat_s(tm._str, len, another._str);
	return tm;
}

//>���������
bool myString::operator>(const myString & another)
{
	if (strcmp(_str, another._str) > 0) {
		return true;
	}
	return false;
}

//<���������
bool myString::operator<(const myString & another)
{
	if (strcmp(_str, another._str) < 0) {
		return true;
	}
	return false;
}

//==���������
bool myString::operator==(const myString & another)
{
	if (strcmp(_str, another._str) == 0) {
		return true;
	}
	return false;
}

//[]���������
char & myString::operator[](int index)
{
	return _str[index];
}

//����char
char * myString::c_str()
{
	return this->_str;
}

//�����ַ
char ** myString::outPutAddress()
{
	return &this->_str;
}