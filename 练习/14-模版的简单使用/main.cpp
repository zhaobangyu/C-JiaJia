#include <iostream>
#include <string>
#include <windows.h>
#include "Statck.h"
using namespace std;


/*
	����ģ��
	�﷨��ʽ��template<typename/class ���Ͳ�����>
	�������� ����ģ����(�����б�)
*/
//template<typename T>
//void Swap(T &a, T &b) {
//	T t = a;
//	a = b;
//	b = t;
//}

int main() {
	////����ģ��ĵ���
	//{
	//	//int���ͽ���
	//	{
	//		int a = 5;
	//		int b = 10;
	//		Swap(a, b);
	//		cout << "int���ͽ���:" << a << "-" << b << endl;
	//	}

	//	//double���ͽ���
	//	{
	//		double a = 1.0;
	//		double b = 2.0;
	//		Swap(a,b);
	//		cout << "double���ͽ���:" << a << "-" << b << endl;
	//	}

	//	//strin���ͽ���
	//	{
	//		string a = "aaaaa";
	//		string b = "bbbbb";
	//		Swap(a, b);
	//		cout << "strin���ͽ���:" << a << "-" << b << endl;
	//	}
	//}

	cout << "----------------------" << endl;
	//��ģ��ʹ��
	{
		//int����
		{
			Statck <int> st(10);
			for (int i = 100; i < 110; i++) {
				st.push(i);
			}
			//�������
			st.dis();
		}

		cout << "----------------------" << endl;
		//string����
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
			//�������
			st.dis();
		}

	}
	system("pause");
	return 0;
}