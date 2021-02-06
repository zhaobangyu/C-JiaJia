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

//ʾ��2
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
		//�����׳��쳣
		throw 5.0;
	}
	catch (int e) {

	}
	catch (...) {
		//д��־�׳��쳣
		cout << "δ֪���쳣" << endl;
		throw;
	}
}

void Examples::run4() 
{
	try
	{
		throw Error("�����쳣��Ϣ...");
	}
	catch (Error err) {
		cout << "run4 catch error(msg=" << err.getMsg().c_str() << ")!" << endl;
	}
}

/*
	ע���÷�����������ڴ�й¶���ᴥ�� Down һ�ι�����һ������
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
	ע���÷���������ڴ�й¶��ֻ�ᴥ��һ�ι��죬���ᴥ��������
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

//����ʾ��5
//˵�����쳣�������ڴ�й¶�����
void Examples::run5()
{
	fun5_1();
	fun5_2();
}