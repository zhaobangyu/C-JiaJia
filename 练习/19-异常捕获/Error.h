#pragma once
#include <iostream>
using namespace std;

class Error
{
public:
	Error(string msg);
	//����������
	Error(const Error & another);
	~Error();

	string getMsg();

	string msg;
};

