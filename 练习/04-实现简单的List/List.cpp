#include "List.h"
#include <iostream>
using namespace std;
List::List()
{
}


List::~List()
{
	clear();
}

//初始化
void List::init()
{
	length = 0;
	pHead = new Node;
	pHead->pNext = NULL;
}

//添加节点
void List::AddNode(char val)
{
	Node *pNewNode = new Node;
	//设置数据
	pNewNode->data = val;
	//设置下一个节点
	pNewNode->pNext = pHead->pNext;
	//设置头节点
	pHead->pNext = pNewNode;
	//节点长度累加
	length++;
}

//获取头节点
Node * List::GetHeadNode()
{
	return pHead;
}

//获取节点长度
int List::GetNodeLength()
{
	return length;
}

//输出所有节点
void List::outPutAllNode()
{
	Node *ptm = pHead;
	while (ptm != NULL) {
		cout << ptm->data << endl;
		//指针下移
		ptm = ptm->pNext;
	}
}

void List::clear()
{
	Node *tm = pHead;
	while (pHead) {
		pHead = pHead->pNext;
		delete tm;
		tm = pHead;
	}
}

