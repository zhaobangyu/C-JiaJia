#include <iostream>
#include <windows.h>
#include <string>
#include "Stack.h"
using namespace std;
/*
	ʵ�ּ򵥵�ջ
	ջ�����Ƚ����
*/
int main() {
	//�����Ѷ���
	Stack stack;
	//��ʼ��
	stack.init();

	//������ջ
	for (char v = 'a'; !stack.isFull() && v != 'z'; v++) {
		stack.push(v);
	}

	//���ݳ�ջ
	for (int i = 0; i < stack.getLength(); i++) {
		cout << stack.pop() << endl;
	}
	system("pause");
}