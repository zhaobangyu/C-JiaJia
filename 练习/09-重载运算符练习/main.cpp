#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Comples
{
public:
	Comples(int x=0, int y=0) 
		:_x(x),_y(y)
	{

	}

	//加号运算符(双目)
	Comples & operator+=(const Comples &another)
	{
		this->_x += another._x;
		this->_y += another._y;
		return *this;
	}

	//负号运算符(单目)
	const Comples operator-() const
	{
		return Comples(-this->_x,-this->_y);
	}

	void dis() {
		cout << "x=" << _x << " y=" << _y << endl;
	}

	int _x;
	int _y;
};

int main() {
	//+=使用示例
	{
		//测试示例1
		{
			Comples a(10, 20), b(30, 40), c;
			c += a;
			c.dis();	//输出 x=40 y=60
		}
		cout << "-------------" << endl;
		//测试示例2
		{
			Comples a(10, 10), b(10, 10), c(10, 10);
			a += b += c;
			a.dis();	//输出 x=30 y=30
			b.dis();	//输出 x=20 y=20
			c.dis();	//输出 x=10 y=10
		}
		cout << "-------------" << endl;
		//测试示例3
		{
			Comples a(10, 10), b(10, 10), c(10, 10);
			(a += b) += c;
			a.dis();	//输出 x=30 y=30
			b.dis();	//输出 x=30 y=30
			c.dis();	//输出 x=30 y=30
		}
		cout << "-------------" << endl << endl;
	}

	//-使用示例
	{
		//示例1
		{
			Comples a(10, 10), b;
			b = -a; 
			a.dis();
			b.dis();
			cout << "-------------" << endl;
		}

		//示例2
		{
			Comples a(10, 10);
			Comples b = -(-a); //等价于 (a.operator-()).operator-();
			a.dis();
			b.dis();
			cout << "-------------" << endl;
		}


		//示例3
		{
			Comples a(30, 30), b(10,10);
			//-b = a;	//err
			a.dis();
			b.dis();
		}
	}
	
	system("pause");
	return 0;
}