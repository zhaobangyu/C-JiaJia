#pragma once
class myStatck
{
public:
	myStatck(int in_maxSize =10);
	~myStatck();

	//�ӿ��ж�
	bool isEmpty();
	//�����ж�
	bool isFull();
	//��������
	bool insertVal(int val);
	//ɾ������
	int * delVal();
	//�������
	void dis();

private:
	//�洢����
	int *pElement;
	//��βָ��
	int rear;
	//���г���
	int length;
	//�������
	int maxSize;
};

