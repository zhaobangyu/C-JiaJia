#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {

	const char **p = new const char *[2];
	p[0] = "china";
	p[1] = "apple";

	for (int i = 0; i < 2; i++) {
		cout << p[i] << endl;
	}
	//Êä³ö
/*
	china
	apple
*/

	system("pause");
	return 0;
}