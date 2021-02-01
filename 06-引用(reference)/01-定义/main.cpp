#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	int a = 10;
	//ra是a的引用
	int &ra = a;
	//输出
	cout << "sizeof(a)=" << sizeof(a) << endl;		//输出 sizeof(a) = 4
	cout << "sizeof(ra)=" << sizeof(ra) << endl;	//输出 sizeof(ra) = 4

	printf("地址输出 a=%p ra=%p\n", a, ra);			//输出 地址输出 a = 000000000000000A ra = 000000000000000A

	printf("值输出 a=%d ra=%d\n",a, ra);			//输出 值输出 a = 10 ra = 10
	a = 30;
	printf("a修改后 输出 a=%d ra=%d\n", a, ra);		//输出 a修改后 输出 a = 30 ra = 30
	ra = 20;
	printf("ra修改后 输出 a=%d ra=%d\n", a, ra);	//输出 ra修改后 输出 a = 20 ra = 20

	//示例1
	//知识点：不能独立存在，必须初始化
	{
		int a1 = 10;
		//int &ra1;		//错误
		int &ra1 = a1;	//正确
	}

	//示例2
	//知识点：与原类型保持一致，且不分配内存
	{
		int a2 = 10;
		//char& rca = a2;	//错误 引用类型必须匹配
		int& ra2 = a2;		//正确
		//float& ra3 = a2;	//错误 引用类型必须匹配
	}

	//示例3
	//知识点：可对引用，再引用，多次引用的结果 ，是某一变量具有多个别名
	//		  多个别名间是平行关系。
	{
		int a3 = 10;
		//ra3_1 是a3 的别名
		int &ra3_1 = a3;
		//ra3_2 是a3 的别名
		int &ra3_2 = ra3_1;

		ra3_2 = 100;
		printf("a3=%d ra3_1=%d ra3_2=%d\n", a3, ra3_1, ra3_2);	//输出 a3=100 ra3_1=100 ra3_2=100
	}

	//示例4
	//知识点：不可更改原有的引用关系
	{
		int a4 = 10;
		int b4 = 20;
		int & ra4 = a4;
		ra4 = b4;	//错误 不可更改原有的引用关系
					//注：这里可以编绎通过，但是其过程为如下：
					//1、ra4 成为 a4的引用
					//2、ra4 = b4 这句代码并不是将ra4设置为b4的引用，而是b4的值赋给ra4，
					//所以最终的值 a4，b4，ra4 都=20
		printf("a4=%d b4=%d ra4=%d \n", a4, b4, ra4);	//输出 a4=20 b4=20 ra4=20
	}

	system("pause");
	return 0;
}