#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//C++ ����
//int �� long��double��
//double �� int��float��
//int �� short��char
//����ʽ����ת���������������Σ������������ԡ�

//��������Ĵ��룬����1����intֵ��
//C++����int��long��double�����ǻ�����޷�����ѡ�����Իᱨ��
//double �� int��float �� int �� short��char Ч��һ����
//���Ե���1�������޷�����ͨ����


//����1
void print(long a) {
	cout << "void print(long a)" << " a=" << a << endl;
}

//����2
void print(double a) {
	cout << "void print(double a)" << " a=" << a << endl;
}

int main() {

	//����1
	//print(10);
	system("pause");
	return 0;
}