#include <iostream>
#include <windows.h>
#include <string>
#include "List.h"
using namespace std;
/*
	实现简单的List
	规则：每个节点指向下一个节点
*/
int main() {
	List list;
	list.init();

	//添加数据
	for (char v = 'a'; v != 'z'; v++) {
		list.AddNode(v);
	}

	//输出所有数据
	list.outPutAllNode();
	//清理数据
	list.clear();
	system("pause");
	return 0;
}