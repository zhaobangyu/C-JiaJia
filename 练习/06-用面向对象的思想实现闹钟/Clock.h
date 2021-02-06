#pragma once
class Clock
{
private:
	int nYear;	//年
	int nMon;	//月
	int nDay;	//日
	int nHour;	//时
	int nMin;	//分
	int nSec;	//秒
public:
	int nYearTm;
public:
	Clock();
	~Clock();

	//初始化数据
	void init();
	//运行
	void run();
	//拨动时间
	void tick();
	//显示时间
	void show();
};

