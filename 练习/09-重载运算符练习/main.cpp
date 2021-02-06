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

	//�Ӻ������(˫Ŀ)
	Comples & operator+=(const Comples &another)
	{
		this->_x += another._x;
		this->_y += another._y;
		return *this;
	}

	//���������(��Ŀ)
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
	//+=ʹ��ʾ��
	{
		//����ʾ��1
		{
			Comples a(10, 20), b(30, 40), c;
			c += a;
			c.dis();	//��� x=40 y=60
		}
		cout << "-------------" << endl;
		//����ʾ��2
		{
			Comples a(10, 10), b(10, 10), c(10, 10);
			a += b += c;
			a.dis();	//��� x=30 y=30
			b.dis();	//��� x=20 y=20
			c.dis();	//��� x=10 y=10
		}
		cout << "-------------" << endl;
		//����ʾ��3
		{
			Comples a(10, 10), b(10, 10), c(10, 10);
			(a += b) += c;
			a.dis();	//��� x=30 y=30
			b.dis();	//��� x=30 y=30
			c.dis();	//��� x=30 y=30
		}
		cout << "-------------" << endl << endl;
	}

	//-ʹ��ʾ��
	{
		//ʾ��1
		{
			Comples a(10, 10), b;
			b = -a; 
			a.dis();
			b.dis();
			cout << "-------------" << endl;
		}

		//ʾ��2
		{
			Comples a(10, 10);
			Comples b = -(-a); //�ȼ��� (a.operator-()).operator-();
			a.dis();
			b.dis();
			cout << "-------------" << endl;
		}


		//ʾ��3
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