#include "myString.h"
#include <iostream>
#include <string.h>
using namespace std;

myString::myString()
{
	_str = new char[1];
	_str[0] = '\0';
	cout << "myString 构造器 1" << endl;
}

myString::myString(char *str)
{
	//获取传入字符长度
	int len = strlen(str) + 1;
	//申请内存空间
	_str = new char[len];
	//初始化数组
	memset(_str, 0, len);
	//拷贝数据
	strcpy_s(_str, len, str);
	cout << "myString 构造器 2" << endl;
}

myString::~myString()
{
	delete[]_str;
	cout << "myString 析构器" << endl;
}

/*
	拷贝构造器
	注：使用系统默认的拷贝构造器，最终拷贝的数据为浅拷贝。
		要实现深拷贝需重载实现。
*/
myString::myString(const myString & another)
{
	cout << "myString 拷贝构造器" << endl;
	int len = strlen(another._str) + 1;
	_str = new char[len];
	memset(_str,0,len);
	strcpy_s(_str, len, another._str);
}

//赋值运算符重载
myString& myString::operator=(const myString & another)
{
	cout << "myString 赋值运算符重载" << endl;
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

//+运算符重载
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

//>运算符重载
bool myString::operator>(const myString & another)
{
	if (strcmp(_str, another._str) > 0) {
		return true;
	}
	return false;
}

//<运算符重载
bool myString::operator<(const myString & another)
{
	if (strcmp(_str, another._str) < 0) {
		return true;
	}
	return false;
}

//==运算符重载
bool myString::operator==(const myString & another)
{
	if (strcmp(_str, another._str) == 0) {
		return true;
	}
	return false;
}

//[]运算符重载
char & myString::operator[](int index)
{
	return _str[index];
}

//返回char
char * myString::c_str()
{
	return this->_str;
}

//输出地址
char ** myString::outPutAddress()
{
	return &this->_str;
}