#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//ʾ��1���������ͷŲ���
	{
		int *p = new int;
		delete p;
	}

	//ʾ��2�������ͷŲ���
	{
		//1ά����
		int *p1 = new int[10];
		delete p1;

		//2ά����
		int(*p2)[3] = new int[2][3];
		delete []p2;

		//3ά����
		int(*p3)[3][4] = new int[2][3][4];
		delete[]p3;
	}
	system("pause");
	return 0;
}