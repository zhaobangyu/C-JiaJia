#include <iostream>
#include <windows.h>
#include <string>
#include "myString.h"
using namespace std;

/*
	实现简单string类
	知识点：构造器，析构器，拷贝构造器，类赋值运算重载
*/
int main() {
	//重载构造器的实现
	{
		myString s1("china");
		cout << "s1=" << s1.c_str() << endl;
		cout << "s1 _str address=" << s1.outPutAddress() << endl;
	}

	//重载拷贝构造器的实现
	{
		myString s1("bobo");
		//示例1
		myString s2(s1);
		cout << "s2=" << s2.c_str() << endl;
		cout << "s2 _str address=" << s2.outPutAddress() << endl;
	}

	//重载类运算符=的实现
	{
		myString s3("fofo");
		myString s4("gogo");

		//赋值运算符
		s3 = s4;
		cout << "s3=" << s3.c_str() << endl;
		cout << "s3 _str address=" << s3.outPutAddress() << endl;
		cout << "s4=" << s4.c_str() << endl;
		cout << "s4 _str address=" << s4.outPutAddress() << endl;
	}

	//重载类运算符+的实现
	{
		myString s5("fofo");
		myString s6("gogo");

		//赋值运算符
		myString s7 = s5 + s6;
		cout << "s7=" << s7.c_str() << endl;
	}

	//重载类运算符>,<,==的实现
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

	//重载类运算符[]的实现
	{
		myString s9("123456789");
		cout << "s9-5:" << s9[3] << endl;
		
		s9[5] = '#';
		cout << "s9:" << s9.c_str() << endl;
	}
	system("pause");
	return 0;
}