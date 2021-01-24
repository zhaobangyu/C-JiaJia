#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	cout << "##########" << endl;
	cout << setw(10) << 1234 << endl;	//输出 "1234"
	cout << setw(10) << setfill('0') << 1234 << endl; //输出 "      0000001234"
	cout << setw(10) << setfill('0') << setiosflags(ios::left) << 1234 << endl;		//输出 "1234000000"
	cout << setw(10) << setfill('-') << setiosflags(ios::right) << 1234 << endl;	//输出 "------1234"
	system("pause");
	return 0;
}