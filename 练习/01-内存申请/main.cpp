#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
/*
	�ֱ���ָ������Ͷ�ά�������ɶ�ά�ռ䣬�洢���ݲ��ͷš����磬�������£�
	a
	abc
	agcdefg
*/
int main() {

	//ָ������
	{
		const char **p = new const char *[3]{"a","abc","agcdefg"};
		for (int i = 0; i < 3; i++) {
			cout << p[i] << endl;
		}
	}
	
	//��ά����
	{
		int(*p)[2] = new int[2][2]{ {100,101},{200,201} };
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << p[i][j] << endl;
			}
		}
	}
	system("pause");
	return 0;
}