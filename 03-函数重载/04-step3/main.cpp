#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//����1
void func(int a) {
	cout << "void func(int a)" << endl;
}

//����2
void func(char a) {
	cout << "void func(char a)" << endl;
}

//����3
void func(int a, char b) {
	cout << "void func(int a, char b)" << endl;
}

//����4
void func(char a, int b) {
	cout << "void func(char a, int b)" << endl;
}

//����5
//ע���뷽��1��ͻ
//���ͣ������� ����������ͬ ���������Ͳ�ͬ ����˳��ͬ
//void func(int a) {
//
//}

//����6
//ע���뷽��1��ͻ
//���ͣ�����ֵ���ͣ�����Ϊ���صı�׼
//int func(int a) {
//
//}

int main() {
	system("pause");
	return 0;
}