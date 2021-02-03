#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

/*
	string 是 C++ 中处理字符串的类，是对C语言中字符串的数据和行为的包装。使
对字符串的处理，更简单易用。
*/

int main()
{
	//赋值及输出
	{
		string str = "china";
		cout << str << endl;	//输出 china

		str = "canada";
		cout << str << endl;	//输出 canada
	}

	//接受输入
	{
		//cout << "请输入数据:";
		//string str;
		//cin >> str;		//space(空格)后的数据会被截断
		//cout << "输入结果:" << str << endl;
		//cout << "str.size:" << str.size() << endl;
	}

	//解决输入空格被截断的问题
	{
		cout << "请输入数据(解决空格截断问题):";
		string str;
		getline(cin, str);
		cout << "输入结果:" << str << endl;
	}

	//string 转 char
	{
		string str = "1234567";
		char buf[32];
		strcpy_s(buf,sizeof(buf),str.c_str());
		cout << "buf:" << buf << endl;	//输出 1234567
		//sizeof 分配的内存大小
		//strlen 实际占用的内存大小
		cout << "sizeof:" << sizeof(buf) << " strlen:" << strlen(buf) << endl;	//输出 sizeof:32 strlen:7
	}
	system("pause");
	return 0;
}