#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//ʾ��1-һά����,δ��ʼ��
	float *p1 = new float[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "p1-" << i << " val=" << p1[i] << endl;
	}
	//��� p1-0 val=-4.31602e+08
	//��� p1-1 val = -4.31602e+08

	//ʾ��2-һά����,��ʼ��
	float *p2 = new float[2]{1.2,3.4};
	for (int i = 0; i < 2; i++)
	{
		cout << "p2-" << i << " val=" << p2[i] << endl;
	}
	//��� p2-0 val=1.2
	//��� p2-1 val=1.4

	//ʾ��3-һά����,�ַ�������
	const char **p3 = new const char *[3];
	for (int i = 0; i < 2; i++)
	{
		p3[i] = "china";
	}
	p3[2] = nullptr;
	while (*p3) {
		cout << "p3 " << " val=" << *p3++ << endl;
		if (*p3 == nullptr) {
			break;
		}
	}
	//��� p3 val=china
	//��� p3 val=china

	//ʾ��4-��ά����,����ʼ��
	{
		int (*p4)[2] = new int[2][2];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				p4[i][j] = i + j;
			}
		}

		//�������
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "p4 i=" << i << " j=" << j << " val=" << p4[i][j] << endl;
			}
		}
		//�������
/*
		p4 i=0 j=0 val=0
		p4 i=0 j=1 val=1
		p4 i=1 j=0 val=1
		p4 i=1 j=1 val=2
*/
	}

	//ʾ��5-��ʼ������
	{
		int(*p5)[2] = new int[2][2]{ {100,100},{200,200} };
		//�������
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "p5 i=" << i << " j=" << j << " val=" << p5[i][j] << endl;
			}
		}
		//���
/*		p5 i = 0 j = 0 val = 100
		p5 i = 0 j = 1 val = 100
		p5 i = 1 j = 0 val = 200
		p5 i = 1 j = 1 val = 200 
*/
	}

	system("pause");
	return 0;
}