#pragma once
class Stack
{
public:
	Stack();
	~Stack();

private:
	//ջ����
	char cData[1024];
	//�±�
	int nTop;

public:
	//��ʼ��
	void init();
	//���ݳ����ж�
	bool isFull();
	//ѹջ
	bool push(char val);
	//��ջ
	char pop();
	//��������
	void clear();
	//��ȡ����
	int getLength();
};

