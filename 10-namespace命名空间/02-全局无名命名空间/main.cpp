#include <iostream>
#include <windows.h>
using namespace std;

/*
	C++ �� C���ԵĻ���֮�ϣ��״����﷨����ʽ��ȷ����ȫ���������ռ�Ĵ��ں�ʹ�÷�����
*/

int var = 100;
void func() {
	cout << "func" << endl;
}

int main()
{
	int var = 200;
	cout << "main var=" << var << endl;			//��� 200
	cout << "global var=" << ::var << endl;		//��� 100

	func();		//��� func
	::func();	//��� func
	system("pause");
	return 0;
}