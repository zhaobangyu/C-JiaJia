#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	
	int i = 123;
	cout << i << endl;						//��� 123
	//10 �������
	cout << "dec:" << dec << i << endl;		//��� 123
	//16 �������
	cout << "hex:" << hex << i << endl;		//��� 7b
	// 8 �������
	cout << "oct:" << oct << i << endl; 	//��� 173
	//���ý���
	cout << setbase(5) << i << endl; 		//��� 123
	system("pause");
	return 0;
}