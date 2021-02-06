#include "Error.h"
#include <iostream>
using namespace std;

Error::Error(string msg)
	:msg(msg)
{
	cout << "Error::Error(string msg)" << endl;
}

//¿½±´¹¹ÔìÆ÷
Error::Error(const Error & another)
{
	cout << "Error::Error(const Error & another)" << endl;
}

Error::~Error()
{
	cout << "Error::~Error()" << endl;
}


string Error::getMsg() {
	return msg;
}
