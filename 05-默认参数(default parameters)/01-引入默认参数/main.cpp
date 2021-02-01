#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Post(string data="default") {
	cout << "data=" << data << endl;
}

int main() {
	//调用1
	Post("send data...");
	//调用2
	Post();
	system("pause");
	return 0;
}