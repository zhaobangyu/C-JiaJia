#include <iostream>
using namespace std;
#include "Examples.h"
#include "Error.h"
#include "Down.h"

Examples::Examples()
{
}


Examples::~Examples()
{
}

void Examples::run1()
{
	try
	{
		throw 100;
	}
	catch (int e) {
		cout << "run1 catch error(e=" << e << ")!" << endl;
	}
}

void Examples::fun2_1()
{
	try
	{
		throw (float)100;	
	}
	catch (int e) {
		cout << "fun2_1 catch error" << endl;
	}
	cout << "fun2_1" << endl;
}

void Examples::fun2_2()
{
	try
	{
		fun2_1();
	}
	catch (float e) {
		cout << "fun2_2 catch error" << endl;
	}
	cout << "fun2_2" << endl;
}

void Examples::fun2_3()
{
	fun2_2();
	cout << "fun2_3" << endl;
}

//示例2
void Examples::run2()
{
	try
	{
		fun2_3();
	}
	catch (int e) {
		cout << "run2 catch error" << endl;
	}
}

void Examples::run3()
{
	try
	{
		//这里抛出异常
		throw 5.0;
	}
	catch (int e) {

	}
	catch (...) {
		//写日志抛出异常
		cout << "未知的异常" << endl;
		throw;
	}
}

void Examples::run4() 
{
	try
	{
		throw Error("捕获到异常信息...");
	}
	catch (Error err) {
		cout << "run4 catch error(msg=" << err.getMsg().c_str() << ")!" << endl;
	}
}

/*
	注：该方法不会造成内存泄露，会触发 Down 一次构造与一次析构
*/
void Examples::fun5_1()
{
	try
	{
		Down down;	
		throw(10);
	}
	catch (int e) {
		cout << "fun5_1 catch error" << endl;
	}
}

/*
	注：该方法会造成内存泄露，只会触发一次构造，不会触发析构。
*/
void Examples::fun5_2()
{
	try
	{
		Down *pDown = new Down();
		throw(10);
	}
	catch (int e) {
		cout << "fun5_2 catch error" << endl;
	}
}

//调用示例5
//说明：异常捕获导致内存泄露的情况
void Examples::run5()
{
	fun5_1();
	fun5_2();
}