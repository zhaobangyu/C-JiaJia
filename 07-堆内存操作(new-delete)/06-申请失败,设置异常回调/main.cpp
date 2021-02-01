#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void newErr() 
{
	cout << "new error" << endl;
	exit(-1);
}

int main() {
	//设置异常回调
	set_new_handler(newErr);
	//累计内存
	INT64 sumMem = 0;
	double *pd[5000];
	for (int i = 0; i < 5000; i++)
	{
		//分配内存
		pd[i] = new double[500000000];
		//内存申请累加
		sumMem += 500000000 * sizeof(double);
		cout << "累计分配 " << sumMem / 1024 / 1024 / 1024 << "G内存空间." << endl;
	}

	//输出信息(注：测试电脑内存为24GB)
/*
	累计分配 3G内存空间.
	累计分配 7G内存空间.
	累计分配 11G内存空间.
	累计分配 14G内存空间.
	累计分配 18G内存空间.
	new error
*/
	system("pause");
	return 0;
}