#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
		һ�����������ܼ������أ�����Ĭ�ϲ����ĺ�����������дһ������ʱ��ϵͳ�޷�ȷ��������
	����Ĭ�ϲ�������ʱ��������� ambiguous�ı������

		������Ҫʵ��ͬ���Ĺ���ʱ������ѡ��Ĭ�ϲ�������Ƚ����� ���ԣ�Ĭ�ϲ�������ʵ�ü�ֵ��
	Ĭ�ϸ��ӽ������ʵ�ʣ������˵����£�Ĭ����36.8һ�����Ͼ����ղ���һ�ֳ�̬��
*/

//����1
void print(int a) {

}

//����2
void print(int a, int b = 10) {

}

int main() {
	//����1
	//print(10);
	//����2
	print(10,20);
	system("pause");
	return 0;
}