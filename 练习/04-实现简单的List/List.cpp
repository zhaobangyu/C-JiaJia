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

//��ʼ��
void List::init()
{
	length = 0;
	pHead = new Node;
	pHead->pNext = NULL;
}

//��ӽڵ�
void List::AddNode(char val)
{
	Node *pNewNode = new Node;
	//��������
	pNewNode->data = val;
	//������һ���ڵ�
	pNewNode->pNext = pHead->pNext;
	//����ͷ�ڵ�
	pHead->pNext = pNewNode;
	//�ڵ㳤���ۼ�
	length++;
}

//��ȡͷ�ڵ�
Node * List::GetHeadNode()
{
	return pHead;
}

//��ȡ�ڵ㳤��
int List::GetNodeLength()
{
	return length;
}

//������нڵ�
void List::outPutAllNode()
{
	Node *ptm = pHead;
	while (ptm != NULL) {
		cout << ptm->data << endl;
		//ָ������
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

