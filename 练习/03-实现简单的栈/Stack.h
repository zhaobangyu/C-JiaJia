#pragma once
class Stack
{
public:
	Stack();
	~Stack();

private:
	//栈数据
	char cData[1024];
	//下标
	int nTop;

public:
	//初始化
	void init();
	//数据超出判断
	bool isFull();
	//压栈
	bool push(char val);
	//出栈
	char pop();
	//清理数据
	void clear();
	//获取长度
	int getLength();
};

