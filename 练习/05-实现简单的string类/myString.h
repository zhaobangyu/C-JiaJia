#pragma once
class myString
{
private:
	char * _str;
public:
	//构造器
	myString();
	myString(char *str);
	//析构器
	~myString();
	//拷贝构造器
	myString(const myString & another);
	//赋值运算符重载
	myString& operator=(const myString & another);
	//+运算符重载
	myString operator+(const myString & another);
	//>运算符重载
	bool operator>(const myString & another);
	//<运算符重载
	bool operator<(const myString & another);
	//==运算符重载
	bool operator==(const myString & another);
	//[]运算符重载
	char &operator[](int index);

	//输出地址
	char ** outPutAddress();

	//返回char
	char * c_str();
};

