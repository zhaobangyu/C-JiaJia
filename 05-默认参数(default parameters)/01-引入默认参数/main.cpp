#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Post(string data="default") {
	cout << "data=" << data << endl;
}

int main() {
	//����1
	Post("send data...");
	//����2
	Post();
	system("pause");
	return 0;
}