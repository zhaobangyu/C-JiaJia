#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Student
{
public:
	Student(string n, int nu)
		:name(n),num(nu)
	{
	}

	string name;
	int num;

};


int main() {
	Student s("zhangsan",23);
	Student s2("lisi", 25);

	string Student::*pn = &Student::name;
	cout << s.*pn << endl;	//Êä³ö zhangsan
	cout << s2.*pn << endl;	//Êä³ö lisi
	system("pause");
	return 0;
}