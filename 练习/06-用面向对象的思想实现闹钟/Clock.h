#pragma once
class Clock
{
private:
	int nYear;	//��
	int nMon;	//��
	int nDay;	//��
	int nHour;	//ʱ
	int nMin;	//��
	int nSec;	//��
public:
	int nYearTm;
public:
	Clock();
	~Clock();

	//��ʼ������
	void init();
	//����
	void run();
	//����ʱ��
	void tick();
	//��ʾʱ��
	void show();
};

