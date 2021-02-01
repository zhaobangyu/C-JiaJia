#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//重载实现机制
//C++利用 Name Mangling（命名倾轧）技术，来改变函数名，区分参数不同的同名函数。
//实现原理：
//用 vc、i、f、i、d 表示 void char int float long double 及其引用。具体平台，实现有差异。

//方法1
//注：倾轧后方法1的名称最终=printd
void print(double a) {

}

//方法2
//注：倾轧后方法1的名称最终=printi
void print(int a) {

}

int main() {
	//调用1 注：倾轧后方法1的名称最终=printi
	print(10);
	//调用2 注：倾轧后方法1的名称最终=printi
	print(11.25);
	system("pause");
	return 0;
}