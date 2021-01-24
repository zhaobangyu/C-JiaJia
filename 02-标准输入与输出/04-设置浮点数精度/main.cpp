#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;
int main() {

	float f = 1.234;
	cout << "defalut:" << f << endl;	//Êä³ö 1.234
	cout << "format:" << setprecision(2) << setiosflags(ios::fixed) << f << endl;	//Êä³ö 1.23
	cout << "format:" << setprecision(4) << setiosflags(ios::fixed) << f << endl;	//Êä³ö 1.2340
	system("pause");
	return 0;
}