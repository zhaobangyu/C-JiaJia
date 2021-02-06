#include <iostream>
#include <windows.h>
#include <string>
#include "Stack.h"
using namespace std;
/*
	实现简单的栈
	栈规则：先进后出
*/
int main() {
	//创建堆对象
	Stack stack;
	//初始化
	stack.init();

	//数据入栈
	for (char v = 'a'; !stack.isFull() && v != 'z'; v++) {
		stack.push(v);
	}

	//数据出栈
	for (int i = 0; i < stack.getLength(); i++) {
		cout << stack.pop() << endl;
	}
	system("pause");
}