#include <iostream>
#include <string>
#include <windows.h>
#include "Statck.h"
using namespace std;


/*
	函数模版
	语法格式：template<typename/class 类型参数表>
	返回类型 函数模版名(函数列表)
*/
//template<typename T>
//void Swap(T &a, T &b) {
//	T t = a;
//	a = b;
//	b = t;
//}

int main() {
	////函数模版的调用
	//{
	//	//int类型交换
	//	{
	//		int a = 5;
	//		int b = 10;
	//		Swap(a, b);
	//		cout << "int类型交换:" << a << "-" << b << endl;
	//	}

	//	//double类型交换
	//	{
	//		double a = 1.0;
	//		double b = 2.0;
	//		Swap(a,b);
	//		cout << "double类型交换:" << a << "-" << b << endl;
	//	}

	//	//strin类型交换
	//	{
	//		string a = "aaaaa";
	//		string b = "bbbbb";
	//		Swap(a, b);
	//		cout << "strin类型交换:" << a << "-" << b << endl;
	//	}
	//}

	cout << "----------------------" << endl;
	//类模版使用
	{
		//int数据
		{
			Statck <int> st(10);
			for (int i = 100; i < 110; i++) {
				st.push(i);
			}
			//输出数据
			st.dis();
		}

		cout << "----------------------" << endl;
		//string数据
		{
			Statck <string> st(10);
			st.push("a");
			st.push("b");
			st.push("c");
			st.push("d");
			st.push("e");
			st.push("f");
			st.push("g");
			st.push("h");
			st.push("i");
			st.push("j");
			//输出数据
			st.dis();
		}

	}
	system("pause");
	return 0;
}