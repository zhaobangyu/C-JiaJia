#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	const int a = 10;
	////注1：编绎报错
	//int *p = &a;
	////注2：编绎报错
	//*p = 100;
	//cout << "a=" << a;
	system("pause");
	return 0;
}
