#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//����ʵ�ֻ���
//C++���� Name Mangling���������������������ı亯���������ֲ�����ͬ��ͬ��������
//ʵ��ԭ��
//�� vc��i��f��i��d ��ʾ void char int float long double �������á�����ƽ̨��ʵ���в��졣

//����1
//ע�������󷽷�1����������=printd
void print(double a) {

}

//����2
//ע�������󷽷�1����������=printi
void print(int a) {

}

int main() {
	//����1 ע�������󷽷�1����������=printi
	print(10);
	//����2 ע�������󷽷�1����������=printi
	print(11.25);
	system("pause");
	return 0;
}