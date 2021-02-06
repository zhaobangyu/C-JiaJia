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
		return "体育频道内容...";
	}
};

class CCTV6 :public IRead {
public:
	virtual string getContent() {
		return "电影频道内容...";
	}
};

class VideoTV 
{
public:
	void playeTv(IRead * p)
	{
		cout << "正在播放内容->" << p->getContent() << endl;
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