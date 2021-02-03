#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

namespace One {
	int x; int y; int z;
	void print() {
		cout << "One::x=" << x << endl;
	}
}

namespace Other {
	int x; int y; int z;
	void print() {
		cout << "Other::x=" << x << endl;
	}
}

//֧�ֶ��Ƕ��
namespace Animal
{
	string name = "����һֻ";
	namespace Cat
	{
		string name = "С��è";
	}
}

int main()
{
	//ʹ�÷�ʽ
	{
		//��ʽ1
		{
			One::x = 10;
			Other::x = 20;
			//cout << x << endl; //err
			cout << "Examples1-One::x=" << One::x << endl;	//��� 10
			One::print();

			cout << "Examples1-Other::x=" << Other::x << endl;	//���20
			Other::print();
		}

		//��ʽ2
		{
			using One::x;
			x = 200;
			cout << "Examples2-One-x=" << x << endl;	//��� 200

			//using Other::x; //err x�������
		}

		//��ʽ3
		{
			using namespace One;
			cout << "Examples3-One-x=" << x << endl;	//���200

			using namespace Other;
			//cout << x << endl; //err x:����ȷ
		}
	}
	

	//���Ƕ��ʹ��
	{
		//��ʽ1
		{
			cout << "Examples1-" << Animal::name << " " << Animal::Cat::name << endl;	//��� Examples1-����һֻ С��è
		}

		//��ʽ2
		{
			using namespace Animal::Cat;
			cout << "Examples2-����һֻ" << " " << name << endl;	//��� Examples1-����һֻ С��è
		}
	}
	system("pause");
	return 0;
}