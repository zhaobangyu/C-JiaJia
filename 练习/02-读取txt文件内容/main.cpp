#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using namespace std;
/*
	��ȡtxt�ļ����ݲ����
*/
int main() {
	FILE *fp = NULL;
	int errCode = fopen_s(&fp, "log.txt", "r+");
	if (errCode != 0) {
		cout << "�ļ���ȡʧ��(������:" << errCode << ")!" << endl;
		system("pause");
		return -1;
	}

	vector <string> vs;
	char buf[1024];
	while (fgets(buf,sizeof(buf),fp)) {
		vs.push_back(buf);
	}

	//ѭ�����
	for (int i = 0; i < vs.size(); i++) {
		cout << vs[i] << endl;
	}
	system("pause");
	return 0;
}