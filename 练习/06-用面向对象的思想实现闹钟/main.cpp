#include <iostream>
#include <windows.h>
#include <string>
#include "Clock.h"
using namespace std;

/*
	ʵ���ӱ���
	���ԣ�ʱ���֡���
	��Ϊ��run() ����Ļ��ʵ�ֵ���ʱ�� 13:04:00 ÿ��һ�����һ����ʾ
	��������ʼ��Ϊϵͳʱ�䣬Ȼ��ÿ��һ�룬ˢ����
*/
int main() {
	Clock tm;
	tm.run();
	system("pause");
	return 0;
}