#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void newErr() 
{
	cout << "new error" << endl;
	exit(-1);
}

int main() {
	//�����쳣�ص�
	set_new_handler(newErr);
	//�ۼ��ڴ�
	INT64 sumMem = 0;
	double *pd[5000];
	for (int i = 0; i < 5000; i++)
	{
		//�����ڴ�
		pd[i] = new double[500000000];
		//�ڴ������ۼ�
		sumMem += 500000000 * sizeof(double);
		cout << "�ۼƷ��� " << sumMem / 1024 / 1024 / 1024 << "G�ڴ�ռ�." << endl;
	}

	//�����Ϣ(ע�����Ե����ڴ�Ϊ24GB)
/*
	�ۼƷ��� 3G�ڴ�ռ�.
	�ۼƷ��� 7G�ڴ�ռ�.
	�ۼƷ��� 11G�ڴ�ռ�.
	�ۼƷ��� 14G�ڴ�ռ�.
	�ۼƷ��� 18G�ڴ�ռ�.
	new error
*/
	system("pause");
	return 0;
}