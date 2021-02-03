#include <iostream>
#include <windows.h>
using namespace std;

/*
	什么是 NameSpace?

		命名空间为了大型项目开发，而引入的一种避免命名冲突的一种机制。比如，
	在一个大型项目中，要用到多家软件开发商提供的类库。在事件没有约定的情况下，
	两套代码库可能存在同名的函数或是全局的变量而产生冲突。项目越大，用到的类库越
	多，开发人员越多，这种冲突就会越明显。

	C的命名空间
		
		C语言将工程的命名空间划分为，全局无命名空间和函数命名空间。全局命名空间中，
	不可以有重名的全局变量和函数（除非被static修饰，函数命名空间，不可以用重名的
	局部变量）

	C++ nameSpace定义
		1、C++ 在 C语言的基础之上，C++首次以语法的行式，确立了全局无名命名空间的存在和
	使用方法。
		2、语法 C++ 引入 namespace 的本质是对全局空间再次划分。确切的说，是对全局的函数
	和变量再次进行作用域打包。

*/

//定义全局变量
int var = 100;
int main()
{
	int *p = &var;
	//全局变量
	printf("global var=%d \n", var);	//输出 100

	int var = 200;
	//局部变量
	printf("main var=%d \n", var);		//输出 200

	//全局变量
	printf("global var=%d \n", *p);		//输出 100
	system("pause");
	return 0;
}