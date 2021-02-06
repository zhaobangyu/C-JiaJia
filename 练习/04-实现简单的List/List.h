#pragma once

struct Node {
	char data;
	Node *pNext;
};

class List
{
public:
	List();
	~List();

private:
	//ͷָ��
	Node *pHead;
	//�ڵ㳤��
	int length;

public:
	//��ʼ��
	void init();
	//��ӽڵ�
	void AddNode(char val);
	//��ȡ�׽ڵ�
	Node * GetHeadNode();
	//��ȡ�ڵ㳤��
	int GetNodeLength();
	//������нڵ�
	void outPutAllNode();
	//��������
	void clear();
};

