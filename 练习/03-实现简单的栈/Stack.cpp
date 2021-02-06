#include "Stack.h"
#include <string.h>


Stack::Stack()
{
}


Stack::~Stack()
{
}

//初始化
void Stack::init() 
{
	//初始化数据
	memset(cData,0,sizeof(cData));
	//下标 
	nTop = 0;
}

//数据超出判断
bool Stack::isFull()
{
	if (nTop >= sizeof(cData)) {
		return true;
	}
	return false;
}

//压栈
bool Stack::push(char val)
{
	//压满验证
	if (isFull()) {
		return false;
	}
	//压数据
	cData[nTop++] = val;
	return true;
}

//出栈
char Stack::pop()
{
	if (nTop <= 0) {
		return NULL;
	}
	return cData[--nTop];
}


//清理数据
void Stack::clear()
{
	init();
}

//获取长度
int Stack::getLength()
{
	return strlen(cData);
}