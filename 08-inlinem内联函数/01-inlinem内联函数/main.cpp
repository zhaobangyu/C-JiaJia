#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
	��C++�У�����Ӧ����ʹ�ú꺯������ʹ������������
*/

//C�еĺ꺯��
#define SQR(x)((x)*(x))

//��ͨ����
int sqr_1(int x) 
{
	return x*x;
}

//C++�е���������
inline int sqr_2(int x) 
{
	return x*x;
}

int main() {

	//��ͨʹ�÷�ʽ
	{
		cout << "�꺯��,SQR=" << SQR(10) << endl;
		cout << "��ͨ����,sqr=" << sqr_1(20) << endl;
		cout << "��������,sqr=" << sqr_2(30) << endl;
	}

	//�궨����㲻��ȷ�ĳ���
	{
		int a = 5;
		int b = 5;
		int result_a = SQR(a++);
		int result_b = sqr_1(b++);
		cout << "a=" << a << " result_a=" << result_a << endl;	//��� a=7 result_a=25
		cout << "b=" << b << " result_b=" << result_b << endl;	//��� b=6 result_b=25
		//���ۣ��궨��ʹ����2��a++������a��ֵ�����7��������û���������
	}
	
	system("pause");
	return 0;
}