#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Comp {
	float real;
	float image;
};

Comp operator+(Comp a, Comp b) {
	Comp c;
	c.real = a.real + b.real;
	c.image = a.image + b.image;
	return c;
}

int main() {
	//��ͨʹ��
	{
		int a = 3;
		int b = 2;
		//��ͨ�������
		int c = a + b;
	}

	//�ṹ�����
	{
		Comp a = {1,2};
		Comp b = { 1,3 };
		//���÷�ʽһ
		Comp c = a + b;
		cout << "c.real= " << c.real << ", c.image=" << c.image << endl;

		//���÷�ʽ��
		//ע�������뷽��һ��
		Comp d = operator+(a,b);
		cout << "d.real= " << d.real << ", d.image=" << d.image << endl;
	}
	system("pause");
	return 0;
}