#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//Ĭ�Ϲ��� 
//1��Ĭ�ϵ�˳���Ǵ������󣬲�����Ծ��
//2�����������Ͷ���һ��ʱ��Ĭ�ϲ����ڶ��壨����������������ǰ�������ں�Ĭ�ϲ���ֻ������������
//3��Ĭ��ֵ�����ǳ�����ȫ�ֱ���������һ������
//4��ʵ�θ���+Ĭ�ϲ����ĸ��� >= �βθ���
//ע������1��print(int a, int b=2, int c=3),�е�aΪ�βΣ�b��cΪĬ�ϲ���
//����2����1Ϊʵ�Σ��������ղ�������=1+2 >= 3

//����1
void print(int a, int b=2, int c=3);
////����2
//void print(int a=1, int b=2, int c);
////����3
//void print(int a=1, int b, int c=3);

void print(int a, int b, int c) {
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
}

int main() {
	////����1
	//print();
	//����2
	print(1);
	//����3
	print(1,2,3);
	system("pause");
	return 0;
}