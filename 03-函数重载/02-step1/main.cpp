#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int iabs(int a) {
	return a > 0 ? a : -a;
}

double fabs(double a) {
	return a > 0 ? a : -a;
}

int main() {
	cout << iabs(1) << endl;	//Êä³ö 1
	cout << fabs(1.23) << endl;	//Êä³ö 1.23
	system("pause");
	return 0;
}