#include <iostream>
#include <windows.h>
#include <string>
#include "Examples1.h"
#include "Examples2.h"
using namespace std;

/*
	同名空间
	同名命名空间可以合并，是协同开发的基础。
*/
namespace One 
{
	int x = 1;
}

namespace One 
{
	//int x;	//err redefine
	int y = 2;
}

int main()
{
	//示例1
	{
		using namespace One;
		cout << "x:" << x << endl;
		cout << "y:" << y << endl;
	}

	//示例2
	{
		Examples::Examples1 a;
		Examples::Examples2 b;
	}
	system("pause");
	return 0;
}