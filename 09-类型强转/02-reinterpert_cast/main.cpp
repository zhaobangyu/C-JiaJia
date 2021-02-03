#include <iostream>
#include <windows.h>
using namespace std;

/*
	语法格式：reinterpret_cast<type>(expression)
	适用场景：通常为操作数的位模式提供较低层的重新解释“也就是说将数据以二进制存在形式的重新解释，
			  在双方向上都不可以隐匿类型转换的，则需要重解释类型转换。”
*/

int main()
{
	{
		int val1 = 10;
		float val2 = 10.55;

		int *p = &val1;
		float *q = &val2;

		//p = q;	//err
		//q = p;	//err

		//p = static_cast<int*>(q);		//err
		//q = static_cast<float*>(p);	//err

		p = reinterpret_cast<int*>(q);
		q = reinterpret_cast<float*>(p);
	}
	system("pause");
	return 0;
}