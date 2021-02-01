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
	func(a);	//Êä³ö "void func(int a)"

	char b = 'a';
	func(b);	//Êä³ö "void func(char a)"

	system("pause");
	return 0;
}