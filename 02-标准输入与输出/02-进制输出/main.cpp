#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	
	int i = 123;
	cout << i << endl;						//输出 123
	//10 进制输出
	cout << "dec:" << dec << i << endl;		//输出 123
	//16 进制输出
	cout << "hex:" << hex << i << endl;		//输出 7b
	// 8 进制输出
	cout << "oct:" << oct << i << endl; 	//输出 173
	//设置进制
	cout << setbase(5) << i << endl; 		//输出 123
	system("pause");
	return 0;
}