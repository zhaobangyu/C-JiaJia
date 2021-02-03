#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
/*
	string to_string(int val);
	string to_string(unsigned val);
	string to_string(unsigned long val);
	string to_string((long long val);
	string to_string(unsigned long long val);
	string to_string(float val);
	string to_string(double val);
	string to_string(long double val);

	int stoi(const string& str, size_t *idx=0, int base=10);
	long stol(const string& str, size_t *idx=0, int base=10);
	unsigned long stoul(const string& str, size_t *idx=0, int base=10);
	long long stoll(const string& str, size_t *idx=0, int base=10);
	unsigned long long stoull(const string& str, size_t *idx=0, int base=10);
	float stof(const string& str, size_t *idx=0);
	double stod(const string& str, size_t *idx=0);
	long double stold(const string& str, size_t *idx=0);
*/
int main()
{
	//数值转字符串
	{
		int a = 1234;
		string str = to_string(a);
		str += "5678";
		cout << "str=" << str << endl;	//输出 12345678
	}

	//字符串转数值
	{
		string str = "1111a";
		int a = stoi(str);
		a++;
		cout << "a=" << a << endl;		//输出 1112

		string strbin = "-10010110001";
		string strhex = "0x7f";

		int bin = stoi(strbin,nullptr, 2);
		int hex = stoi(strhex, nullptr, 16);
		cout << "bin:" << bin << endl;
		cout << "hex:" << hex << endl;
	}
	system("pause");
	return 0;
}