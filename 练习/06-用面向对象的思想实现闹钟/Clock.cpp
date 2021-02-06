#include "Clock.h"
#include <time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip>
using namespace std;

Clock::Clock()
{
	init();
}

Clock::~Clock()
{
}

//��ʼ������
void Clock::init()
{
	tm t;		//tm�ṹָ��
	time_t now;	//����time_t����
	time(&now);	//��ȡϵͳ���ں�ʱ��
	localtime_s(&t, &now);	//��ȡ��ǰ���ں�ʱ��
	//��
	nYear = t.tm_yday + 1900;
	//��
	nMon = t.tm_mon + 1;
	//��
	nDay = t.tm_mday;
	//ʱ
	nHour = t.tm_hour;
	//��
	nMin = t.tm_min;
	//��
	nSec = t.tm_sec;
}

//����
void Clock::run()
{
	while (1) {
		//����ʱ��
		tick();
		//��ʾʱ��
		show();
		Sleep(1000);
	}
}

void Clock::tick()
{
	nSec++;
	if (nSec > 59) {
		nSec = 0;
		nMin++;
	}

	if (nMin > 59) {
		nMin = 0;
		nHour++;
	}

	if (nHour > 23) {
		nHour = 0;
	}
}

//��ʾʱ��
void Clock::show()
{
	//���������
	system("cls");
	//��ʾ��ʽ1(C����ʾ��ʽ)
	//{
	//	char szBuffer[25];
	//	memset(szBuffer, 0, sizeof(szBuffer));
	//	sprintf_s(szBuffer, "%02d:%02d:%02d", nHour, nMin, nSec);
	//	cout << szBuffer << endl;
	//}
	
	//��ʾ��ʽ2(C++����ʾ��ʽ)
	{
		cout << setw(2) << setfill('0') << nHour << ":";
		cout << setw(2) << setfill('0') << nMin << ":";
		cout << setw(2) << setfill('0') << nSec << endl;
	}
}