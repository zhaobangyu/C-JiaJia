#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	int a = 10;
	//ra��a������
	int &ra = a;
	//���
	cout << "sizeof(a)=" << sizeof(a) << endl;		//��� sizeof(a) = 4
	cout << "sizeof(ra)=" << sizeof(ra) << endl;	//��� sizeof(ra) = 4

	printf("��ַ��� a=%p ra=%p\n", a, ra);			//��� ��ַ��� a = 000000000000000A ra = 000000000000000A

	printf("ֵ��� a=%d ra=%d\n",a, ra);			//��� ֵ��� a = 10 ra = 10
	a = 30;
	printf("a�޸ĺ� ��� a=%d ra=%d\n", a, ra);		//��� a�޸ĺ� ��� a = 30 ra = 30
	ra = 20;
	printf("ra�޸ĺ� ��� a=%d ra=%d\n", a, ra);	//��� ra�޸ĺ� ��� a = 20 ra = 20

	//ʾ��1
	//֪ʶ�㣺���ܶ������ڣ������ʼ��
	{
		int a1 = 10;
		//int &ra1;		//����
		int &ra1 = a1;	//��ȷ
	}

	//ʾ��2
	//֪ʶ�㣺��ԭ���ͱ���һ�£��Ҳ������ڴ�
	{
		int a2 = 10;
		//char& rca = a2;	//���� �������ͱ���ƥ��
		int& ra2 = a2;		//��ȷ
		//float& ra3 = a2;	//���� �������ͱ���ƥ��
	}

	//ʾ��3
	//֪ʶ�㣺�ɶ����ã������ã�������õĽ�� ����ĳһ�������ж������
	//		  �����������ƽ�й�ϵ��
	{
		int a3 = 10;
		//ra3_1 ��a3 �ı���
		int &ra3_1 = a3;
		//ra3_2 ��a3 �ı���
		int &ra3_2 = ra3_1;

		ra3_2 = 100;
		printf("a3=%d ra3_1=%d ra3_2=%d\n", a3, ra3_1, ra3_2);	//��� a3=100 ra3_1=100 ra3_2=100
	}

	//ʾ��4
	//֪ʶ�㣺���ɸ���ԭ�е����ù�ϵ
	{
		int a4 = 10;
		int b4 = 20;
		int & ra4 = a4;
		ra4 = b4;	//���� ���ɸ���ԭ�е����ù�ϵ
					//ע��������Ա���ͨ�������������Ϊ���£�
					//1��ra4 ��Ϊ a4������
					//2��ra4 = b4 �����벢���ǽ�ra4����Ϊb4�����ã�����b4��ֵ����ra4��
					//�������յ�ֵ a4��b4��ra4 ��=20
		printf("a4=%d b4=%d ra4=%d \n", a4, b4, ra4);	//��� a4=20 b4=20 ra4=20
	}

	system("pause");
	return 0;
}