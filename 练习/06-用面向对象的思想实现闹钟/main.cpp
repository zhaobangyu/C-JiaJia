#include <iostream>
#include <windows.h>
#include <string>
#include "Clock.h"
using namespace std;

/*
	实现钟表类
	属性：时、分、秒
	行为：run() 在屏幕上实现电子时钟 13:04:00 每隔一秒更新一个显示
	分析：初始化为系统时间，然后每隔一秒，刷屏。
*/
int main() {
	Clock tm;
	tm.run();
	system("pause");
	return 0;
}