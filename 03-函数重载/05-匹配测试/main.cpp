#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//ƥ�����
//1���ϸ�ƥ�䣬�ҵ�����á�
//2��ͨ����ʽת��Ѱ��һ��ƥ�䣬�ҵ�����á�

void print(double a) {
	cout << "void print(double a)" << " a=" << a << endl;
}

void print(int a) {
	cout << "void print(int a)" << " a=" << a << endl;
}

int main() {

	print(1);			//��� "void print(int a) a=1"
	print(1.1);			//��� "void print(double a) a=1.1"
	print('a');			//��� "void print(int a) a=97"
	print(1.11f);		//��� "void print(double a) a=1.1"
	system("pause");
	return 0;
}