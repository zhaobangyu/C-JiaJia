#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void func(int a) {
	cout << "void func(int a)" << endl;
}

void func(char a) {
	cout << "void func(char a)" << endl;
}

int main() {
	int a = 10;
	func(a);	//��� "void func(int a)"

	char b = 'a';
	func(b);	//��� "void func(char a)"

	system("pause");
	return 0;
}