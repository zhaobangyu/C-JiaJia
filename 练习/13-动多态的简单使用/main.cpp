#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class IRead
{
public:
	virtual string getContent() = 0;
};

class CCTV5:public IRead
{
public:
	virtual string getContent() {
		return "����Ƶ������...";
	}
};

class CCTV6 :public IRead {
public:
	virtual string getContent() {
		return "��ӰƵ������...";
	}
};

class VideoTV 
{
public:
	void playeTv(IRead * p)
	{
		cout << "���ڲ�������->" << p->getContent() << endl;
	}
};


int main() {
	CCTV5 tv5;
	CCTV6 tv6;

	VideoTV tv;
	tv.playeTv(&tv5);
	tv.playeTv(&tv6);
	system("pause");
	return 0;
}