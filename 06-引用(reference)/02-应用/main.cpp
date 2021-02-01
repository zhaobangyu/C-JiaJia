#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//�Խ�������Ϊ����

//����1
//������޷������޸ģ���Ϊa��bΪ�β�
void swapByValue(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//����2
//����������ɹ�����Ҫ�¿���1��int�Ŀռ�
void swapByPtr1(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

//����3
//����������ɹ�����Ҫ�¿���*pa��*pb�Ŀռ�
void swapByPtr2(int *pa, int *pb) {
	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pb;
}

//����4
//����������ɹ�������Ҫ���ٿռ䣬����
void swapByReferenc(int &ra, int &rb) {
	ra ^= rb;
	rb ^= ra;
	ra ^= rb;
}

//����5-�ַ�����
//����:����ʧ��
void swapCharByPtr1(char *p, char *q) {
	char * t = p;
	p = q;
	q = t;
}

//����6-�ַ�����
//����:�����ɹ�
void swapCharByPtr2(char **p, char **q) {
	char * t = *p;
	*p = *q;
	*q = t;
}

//����7-�ַ�����
//����:�����ɹ���ƽ������
void swapCharByReferenc(char * &p, char *&q) {
	char * t = p;
	p = q;
	q = t;
}

int main() {
	//����1 swapByValue ���� 
	{
		int a1 = 10;
		int b1 = 20;
		//��������
		swapByValue(a1, b1);
		//�������
		printf("a1=%d b1=%d\n", a1, b1);	//ʧ�ܣ���� a1 = 10 b1 = 20
	}

	//����2 swapByPtr1 ���� 
	{
		int a2 = 10;
		int b2 = 20;
		//��������
		swapByPtr1(&a2, &b2);
		//�������
		printf("a2=%d b2=%d\n", a2, b2);	//�ɹ������ a2 = 20 b2 = 10
	}

	//����3 swapByPtr2 ���� 
	{
		int a3 = 10;
		int b3 = 20;
		//��������
		swapByPtr2(&a3, &b3);
		//�������
		printf("a3=%d b3=%d\n", a3, b3);	//�ɹ������ a3 = 20 b3 = 10
	}

	//����4 swapByPtr2 ���� 
	{
		int a4 = 10;
		int b4 = 20;
		//��������
		swapByReferenc(a4, b4);
		//�������
		printf("a4=%d b4=%d\n", a4, b4);	//�ɹ������ a4 = 20 b4 = 10
	}

	//����5-�ַ����� swapCharByPtr1 ���� 
	{
		char p[] = "a";
		char q[] = "b";

		char *p1 = p;
		char *q1 = q;

		//��������
		swapCharByPtr1(p1, q1);
		//�������
		printf("p1=%c q1=%c\n", *p1, *q1);	//ʧ�ܣ���� p1 = a q1 = b
	}

	
	//����6-�ַ����� swapCharByPtr1 ���� 
	{
		char p[] = "a";
		char q[] = "b";

		char *p2 = p;
		char *q2 = q;

		//��������
		swapCharByPtr2(&p2, &q2);
		//�������
		printf("p2=%c q2=%c\n", *p2, *q2);	//�ɹ������ p2 = b q2 = a
	}

	//����7-�ַ����� swapCharByReferenc ���� 
	{
		char p[] = "a";
		char q[] = "b";

		char *p3 = p;
		char *q3 = q;

		//��������
		swapCharByReferenc(p3, q3);
		//�������
		printf("p3=%c q3=%c\n", *p3, *q3);	//�ɹ������ p2 = b q2 = a
	}
	system("pause");
	return 0;
}