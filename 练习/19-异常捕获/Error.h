#pragma once
#include <iostream>
using namespace std;

class Error
{
public:
	Error(string msg);
	//¿½±´¹¹ÔìÆ÷
	Error(const Error & another);
	~Error();

	string getMsg();

	string msg;
};

