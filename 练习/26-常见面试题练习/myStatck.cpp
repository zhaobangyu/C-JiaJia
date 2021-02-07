#include "myStatck.h"
#include <iostream>
using namespace std;

myStatck::myStatck(int in_maxSize)
	:maxSize(in_maxSize), rear(0),length(0)
{
	pElement = new int[maxSize];
	//初始化
	memset(pElement,0, maxSize);
}


myStatck::~myStatck()
{
	delete[]pElement;
}

//队空判断
bool myStatck::isEmpty()
{
	return length == 0;
}

//队满判断
bool myStatck::isFull()
{
	return length == maxSize;
}

//插入数据
bool myStatck::insertVal(int val)
{
	if (isFull()) {
		return false;
	}
	//队列长度累加
	length++;
	//设置数据
	pElement[rear] = val;
	//队尾位置
	rear++;
	if (rear > maxSize) {
		rear = 0;
	}
	return false;
}

//删除数据
int * myStatck::delVal()
{
	if (isEmpty()) {
		return false;
	}

	//队列长度递减
	length--;
	//队尾下标
	rear--;
	if (rear <= 0) {
		rear = 0;
	}
	return &pElement[rear];
}

//输出数据
void myStatck::dis()
{
	for (int i = 0; i < length; i++) {
		cout << *(pElement+i) << endl;
	}
}