#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	//常规方式
	{
		char str[] = "abcdefg";
		for (int i = strlen(str); i--; i >= 0) {
			cout << str[i] << endl;
		}
	}
	cout << "--------------------" << endl;

	//指针方式
	{
		char str[] = "abcdefg";
		for (int i = sizeof(str)/sizeof(str[0])-1; i--; i >= 0) {
			cout << *(str+i) << endl;
		}
	}

	system("pause");
	return 0;
}