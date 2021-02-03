#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	string strArray[10] = {
		"0",
		"1",
		"22",
		"333",
		"4444",
		"55555",
		"666666",
		"7777777",
		"88888888",
		"999999999",
	};

	for (int i = 0; i < 10; i++) {
		cout << strArray[i] << endl;
	}
	system("pause");
	return 0;
}