#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class MyStream
{
public:
	MyStream(char * path, char *mode) {
		fopen_s(&fp, path, mode);
	}

	char get()
	{
		return fgetc(fp);
	}

	void put(char v) 
	{
		fputc(v, fp);
	}

	void seek(int offset, int where)
	{
		fseek(fp, offset, where);
	}

	~MyStream()
	{

	}

private:
	FILE *fp;
};

int main() {
	
	MyStream ms("abc.txt","w+");
	ms.put('a');
	ms.seek(0, SEEK_SET);
	char ch;
	ch = ms.get();
	cout << ch << endl;

	system("pause");
	return 0;
}