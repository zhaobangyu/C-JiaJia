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

//支持多层嵌套
namespace Animal
{
	string name = "我是一只";
	namespace Cat
	{
		string name = "小花猫";
	}
}

int main()
{
	//使用方式
	{
		//方式1
		{
			One::x = 10;
			Other::x = 20;
			//cout << x << endl; //err
			cout << "Examples1-One::x=" << One::x << endl;	//输出 10
			One::print();

			cout << "Examples1-Other::x=" << Other::x << endl;	//输出20
			Other::print();
		}

		//方式2
		{
			using One::x;
			x = 200;
			cout << "Examples2-One-x=" << x << endl;	//输出 200

			//using Other::x; //err x多次声明
		}

		//方式3
		{
			using namespace One;
			cout << "Examples3-One-x=" << x << endl;	//输出200

			using namespace Other;
			//cout << x << endl; //err x:不明确
		}
	}
	

	//多层嵌套使用
	{
		//方式1
		{
			cout << "Examples1-" << Animal::name << " " << Animal::Cat::name << endl;	//输出 Examples1-我是一只 小花猫
		}

		//方式2
		{
			using namespace Animal::Cat;
			cout << "Examples2-我是一只" << " " << name << endl;	//输出 Examples1-我是一只 小花猫
		}
	}
	system("pause");
	return 0;
}