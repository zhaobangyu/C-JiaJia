#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;


struct Stu
{
	char name[30];
	int sex;
	int age;
};

int main() {
	Stu s[3] = {
		{"aaa", 0, 1},
		{"bbb", 1, 1 },
		{"bbb", 1, 0 },
	};

	//д�����������
	{
		fstream fs("aaa.txt", ios::in | ios::out | ios::trunc | ios::binary);
		if (!fs) {
			cout << "aaa.txt open error" << endl;
			return 0;
		}

		//ȫ��д��
		fs.write((char*)&s,sizeof(s));
		fs.close();
	}

	//��ȡ����������
	{
		fstream fs("aaa.txt", ios::in | ios::out | ios::binary);
		if (!fs) {
			cout << "aaa.txt open error" << endl;
			return 0;
		}

		Stu tmp;
		while (fs.read((char*)&tmp, sizeof(Stu)),!fs.eof()) {
			cout << "name:" << tmp.name << endl;
			cout << "sex:" << tmp.sex << endl;
			cout << "age:" << tmp.age << endl;
		}
		fs.close();
	}


	system("pause");
	return 0;
}