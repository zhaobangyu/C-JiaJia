#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//ע��C++�����ڼ򻯱�̣�ͨ�������������ﵽ�򻯱�̵�Ŀ�ġ�

int myAbs(int a) {
	return a > 0 ? a : -a;
}

double myAbs(double a) {
	return a > 0 ? a : -a;
}

int main() {
	cout << myAbs(1) << endl;		//���	1
	cout << myAbs(1.23) << endl;	//���	1.23
	system("pause");
	return 0;
}