// 02-逻辑类型bool.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	bool flag = true;
	if (flag) { 
		cout << "flag is true" << endl;	//输出 flag is true
	}
	else {
		cout <<  "flag is false" << endl;
	}
	//输出占用大小
	cout << "sizeof(flag)=" << sizeof(flag) << endl;	//输出 sizeof(flag)=1
	cout << "sizeof(bool)=" << sizeof(bool) << endl;	//输出 sizeof(bool)=1

	//重新赋值
	flag = 100;
	cout << "flag=" << flag << endl;	//输出 flag=1
	system("pause");
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
