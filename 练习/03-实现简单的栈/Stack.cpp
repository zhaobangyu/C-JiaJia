#include "Stack.h"
#include <string.h>


Stack::Stack()
{
}


Stack::~Stack()
{
}

//��ʼ��
void Stack::init() 
{
	//��ʼ������
	memset(cData,0,sizeof(cData));
	//�±� 
	nTop = 0;
}

//���ݳ����ж�
bool Stack::isFull()
{
	if (nTop >= sizeof(cData)) {
		return true;
	}
	return false;
}

//ѹջ
bool Stack::push(char val)
{
	//ѹ����֤
	if (isFull()) {
		return false;
	}
	//ѹ����
	cData[nTop++] = val;
	return true;
}

//��ջ
char Stack::pop()
{
	if (nTop <= 0) {
		return NULL;
	}
	return cData[--nTop];
}


//��������
void Stack::clear()
{
	init();
}

//��ȡ����
int Stack::getLength()
{
	return strlen(cData);
}