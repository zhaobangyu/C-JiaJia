#include <iostream>
#include <windows.h>
#include <string>
#include "List.h"
using namespace std;
/*
	ʵ�ּ򵥵�List
	����ÿ���ڵ�ָ����һ���ڵ�
*/
int main() {
	List list;
	list.init();

	//�������
	for (char v = 'a'; v != 'z'; v++) {
		list.AddNode(v);
	}

	//�����������
	list.outPutAllNode();
	//��������
	list.clear();
	system("pause");
	return 0;
}