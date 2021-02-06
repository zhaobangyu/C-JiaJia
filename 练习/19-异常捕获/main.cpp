#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Examples.h"
using namespace std;

int main() {
	Examples em;
	//示例1(简单的应用)
	{
		em.run1();
	}

	//示例2
	//关于嵌套异常的逻辑示例
	{
		em.run2();
	}

	//示例3
	//关于未知的异常，未来捕获到的解决方法
	{
		//em.run3();
	}

	//示例4
	//抛出指定的类
	{
		em.run4();
	}

	//示例5
	//导致内存泄露的问题
	{
		em.run5();
	}
	system("pause");
	return 0;
}