#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Examples.h"
using namespace std;

int main() {
	Examples em;
	//ʾ��1(�򵥵�Ӧ��)
	{
		em.run1();
	}

	//ʾ��2
	//����Ƕ���쳣���߼�ʾ��
	{
		em.run2();
	}

	//ʾ��3
	//����δ֪���쳣��δ�����񵽵Ľ������
	{
		//em.run3();
	}

	//ʾ��4
	//�׳�ָ������
	{
		em.run4();
	}

	//ʾ��5
	//�����ڴ�й¶������
	{
		em.run5();
	}
	system("pause");
	return 0;
}