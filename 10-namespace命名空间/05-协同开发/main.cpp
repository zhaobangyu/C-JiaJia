#include <iostream>
#include <windows.h>
#include <string>
#include "Examples1.h"
#include "Examples2.h"
using namespace std;

/*
	ͬ���ռ�
	ͬ�������ռ���Ժϲ�����Эͬ�����Ļ�����
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
	//ʾ��1
	{
		using namespace One;
		cout << "x:" << x << endl;
		cout << "y:" << y << endl;
	}

	//ʾ��2
	{
		Examples::Examples1 a;
		Examples::Examples2 b;
	}
	system("pause");
	return 0;
}