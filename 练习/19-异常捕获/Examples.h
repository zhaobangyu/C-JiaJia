#pragma once
class Examples
{
public:
	Examples();
	~Examples();

	//调用示例1
	//说明：简单的应用
	void run1();

	//演示函数
	void fun2_1() throw(float, double);	//声明该函数可能抛掷float double类型的异常
	void fun2_2();
	void fun2_3() throw();	//声明该函数不抛掷任何类型的异常
	//调用示例2(嵌套函数调用应用)
	//说明：fun2_1抛出float型值，fun2_1方法块无法catch到异常
	//最终异常在fun2_2被捕获,并且catch后的代码不再执行
	void run2();

	//调用示例3
	//说明：关于未知的异常，未来捕获到的解决方法，该示例会导致程序崩溃（由于没有匹配到throw的原因）
	void run3();

	//调用示例4
	//说明：抛出异常类
	void run4();

	void fun5_1();	//该函数不会内存泄露
	void fun5_2();	//该函数内存会泄露
	//调用示例5
	//说明：异常捕获导致内存泄露的情况
	void run5();
};