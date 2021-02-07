#include "myStatck.h"
#include <iostream>
using namespace std;

myStatck::myStatck(int in_maxSize)
	:maxSize(in_maxSize), rear(0),length(0)
{
	pElement = new int[maxSize];
	//��ʼ��
	memset(pElement,0, maxSize);
}


myStatck::~myStatck()
{
	delete[]pElement;
}

//�ӿ��ж�
bool myStatck::isEmpty()
{
	return length == 0;
}

//�����ж�
bool myStatck::isFull()
{
	return length == maxSize;
}

//��������
bool myStatck::insertVal(int val)
{
	if (isFull()) {
		return false;
	}
	//���г����ۼ�
	length++;
	//��������
	pElement[rear] = val;
	//��βλ��
	rear++;
	if (rear > maxSize) {
		rear = 0;
	}
	return false;
}

//ɾ������
int * myStatck::delVal()
{
	if (isEmpty()) {
		return false;
	}

	//���г��ȵݼ�
	length--;
	//��β�±�
	rear--;
	if (rear <= 0) {
		rear = 0;
	}
	return &pElement[rear];
}

//�������
void myStatck::dis()
{
	for (int i = 0; i < length; i++) {
		cout << *(pElement+i) << endl;
	}
}