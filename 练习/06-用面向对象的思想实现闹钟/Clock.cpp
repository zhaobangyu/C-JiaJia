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

//初始化数据
void Clock::init()
{
	tm t;		//tm结构指针
	time_t now;	//声明time_t类型
	time(&now);	//获取系统日期和时间
	localtime_s(&t, &now);	//获取当前日期和时间
	//年
	nYear = t.tm_yday + 1900;
	//月
	nMon = t.tm_mon + 1;
	//日
	nDay = t.tm_mday;
	//时
	nHour = t.tm_hour;
	//分
	nMin = t.tm_min;
	//秒
	nSec = t.tm_sec;
}

//运行
void Clock::run()
{
	while (1) {
		//拨动时间
		tick();
		//显示时间
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

//显示时间
void Clock::show()
{
	//清理命令窗口
	system("cls");
	//显示方式1(C的显示方式)
	//{
	//	char szBuffer[25];
	//	memset(szBuffer, 0, sizeof(szBuffer));
	//	sprintf_s(szBuffer, "%02d:%02d:%02d", nHour, nMin, nSec);
	//	cout << szBuffer << endl;
	//}
	
	//显示方式2(C++的显示方式)
	{
		cout << setw(2) << setfill('0') << nHour << ":";
		cout << setw(2) << setfill('0') << nMin << ":";
		cout << setw(2) << setfill('0') << nSec << endl;
	}
}