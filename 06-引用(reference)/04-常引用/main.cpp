#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {

	//֪ʶ1��������ȡ�� #define ����ĺ곣��
	{
		const int a = 100;
		int b = 300;
		int c = a + b;
		cout << "c=" << c << endl;	//���400
	}

	//֪ʶ2��const����ֻ������Ϊconst����
	{
		const int a = 100;
		//int& b = a;		//����-�޸�Ϊ ��const int& b = a;������
		const int& c = a;	//��ȷ
	}

	//֪ʶ3��no-const����,����������Ϊconst���ã�Ҳ��������Ϊno-const���ã�
	//		 ����Ϊconst���ã��򲻿���ͨ��const�����޸�����
	{
		int a = 100;
		int& ra1 = a;			//��ȷ
		const int& ra2 = a;		//��ȷ
		//ra2 = 200;			//��������Ϊconst���ã����ܶԸ������޸�
	}

	//֪ʶ3��const�������÷�
	{
		int a = 100;
		int& ra1 = a;				//��ȷ
		//�÷�1�������ø�ֵ���ʽ
		{
			//int& ra2 = a + 5;			//����
			const int& ra3 = a + 5;		//��ȷ
		}

		// �÷�2�����ò�ͬ���͵�ֵ
		{
			double dVal = 1.23;
			//int& ra4 = dVal;			//����
			const int& ra5 = dVal;		//��ȷ
			//�������
			printf("const���ò�ͬ���͵�ֵ ra5=%d \n", ra5);	//���1
		}
	}
	system("pause");
	return 0;
}