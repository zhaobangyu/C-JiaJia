#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//示例1-一维数组,未初始化
	float *p1 = new float[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "p1-" << i << " val=" << p1[i] << endl;
	}
	//输出 p1-0 val=-4.31602e+08
	//输出 p1-1 val = -4.31602e+08

	//示例2-一维数组,初始化
	float *p2 = new float[2]{1.2,3.4};
	for (int i = 0; i < 2; i++)
	{
		cout << "p2-" << i << " val=" << p2[i] << endl;
	}
	//输出 p2-0 val=1.2
	//输出 p2-1 val=1.4

	//示例3-一维数组,字符串操作
	const char **p3 = new const char *[3];
	for (int i = 0; i < 2; i++)
	{
		p3[i] = "china";
	}
	p3[2] = nullptr;
	while (*p3) {
		cout << "p3 " << " val=" << *p3++ << endl;
		if (*p3 == nullptr) {
			break;
		}
	}
	//输出 p3 val=china
	//输出 p3 val=china

	//示例4-二维数组,不初始化
	{
		int (*p4)[2] = new int[2][2];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				p4[i][j] = i + j;
			}
		}

		//输出数据
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "p4 i=" << i << " j=" << j << " val=" << p4[i][j] << endl;
			}
		}
		//输出数据
/*
		p4 i=0 j=0 val=0
		p4 i=0 j=1 val=1
		p4 i=1 j=0 val=1
		p4 i=1 j=1 val=2
*/
	}

	//示例5-初始化数组
	{
		int(*p5)[2] = new int[2][2]{ {100,100},{200,200} };
		//输出数据
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "p5 i=" << i << " j=" << j << " val=" << p5[i][j] << endl;
			}
		}
		//输出
/*		p5 i = 0 j = 0 val = 100
		p5 i = 0 j = 1 val = 100
		p5 i = 1 j = 0 val = 200
		p5 i = 1 j = 1 val = 200 
*/
	}

	system("pause");
	return 0;
}