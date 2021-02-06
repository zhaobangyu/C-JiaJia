#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;

int main() {

	fstream fsr("aaa.txt", ios::in|ios::out|ios::trunc);
	if (!fsr) {
		cout << "aaa.txt open error" << endl;
		return 0;
	}

	//д������
	fsr << "aaaaaa    bbbbbbbb" << endl;
	fsr << "123232    cccccccc" << endl;
	fsr << "dafdfd    eqeeeere" << endl;
	fsr << "afdadf    plpkpkpk";

	//����λ��
	fsr.seekg(0, ios::beg);

	//д�뵽bbb.txt
	{
		fstream fsw("bbb.txt", ios::in | ios::out | ios::trunc);
		if (!fsw) {
			cout << "bbb.txt open error" << endl;
			return 0;
		}

		char buf[1024];
		while (fsr.getline(buf,1024, '\n'), !fsr.eof()) {
			fsw << buf << endl;
		}
		fsw.close();
	}
	fsr.close();

	system("pause");
	return 0;
}