#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	//使用1
	{
		string s1 = "china";
		string s2 = "china";
		if (s1 < s2) {
			cout << "s1 < s2" << endl;
		}
		else if (s1 > s2) {
			cout << "s1 < s2" << endl;
		}
		else {
			cout << "s1 == s2" << endl;	//输出 "s1 == s2"
		}

		string s3 = s1 + s2;
		cout << "s3=" << s3 << endl;	//输出 "s3=chinachina"
	}
	system("pause");
	return 0;
}