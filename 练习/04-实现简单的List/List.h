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
	//头指针
	Node *pHead;
	//节点长度
	int length;

public:
	//初始化
	void init();
	//添加节点
	void AddNode(char val);
	//获取首节点
	Node * GetHeadNode();
	//获取节点长度
	int GetNodeLength();
	//输出所有节点
	void outPutAllNode();
	//清理数据
	void clear();
};

