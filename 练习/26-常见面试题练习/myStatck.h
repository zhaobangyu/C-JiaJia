#pragma once
class myStatck
{
public:
	myStatck(int in_maxSize =10);
	~myStatck();

	//队空判断
	bool isEmpty();
	//队满判断
	bool isFull();
	//插入数据
	bool insertVal(int val);
	//删除数据
	int * delVal();
	//输出数据
	void dis();

private:
	//存储数据
	int *pElement;
	//队尾指针
	int rear;
	//队列长度
	int length;
	//最大数量
	int maxSize;
};

