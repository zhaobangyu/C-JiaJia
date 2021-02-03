#include <iostream>
#include <windows.h>
using namespace std;

/*
	语法格式：const_cast<type>(expression)
	适用场景：用来移除非const对象的引用或指针的常量性(cast away the constness)使用const_cast去除const对于引用和指针限定，通常是
			  为了函数能够接受参数或返回值 。
	评价：被const引用后的，返作用
	注意：目标类类型只能是指针或引用
*/

void foo(int &a)
{
	a = 200;
	cout << "foo=" << a << endl;	//输出 200
}

int main()
{
	//示例1
	//说明：const_cast 只作用于指针和引用，去const化
	{
		int a = 100;
		const int &ra = a;
		cout << "a=" << a << endl;		//输出 a=100

		const_cast<int&>(ra) = 300;
		cout << "ra=" << ra << endl;	//输出 ra=300
		cout << "a=" << a << endl;		//输出 a=300

		const int *p = &a;
		*const_cast<int*>(p) = 400;
		cout << "*p=" << *p << endl;	//输出 *p=400
	}

	//示例2
	//说明：const一定不可以改
	{
		const int b = 20;
		int &rb = const_cast<int&>(b);
		rb = 30;
		cout << "b_address=" << &b << " b_val=" << b << endl;
		cout << "rb_address=" << &rb << " rb_val=" << rb << endl;
	}

	//示例3
	//说明：const解决的问题以及使用场景(此示例用到上面定义的foo函数)
	{
		const int c = 100;
		//foo(c);	//err 报错
		foo(const_cast<int&>(c));
		cout << "c=" << c << endl;		//输出 100
	}

	//示例4
	//说明：结构体的使用
	{
		struct UserInfo {
			int val1;
			int val2;
		};

		const UserInfo userInfo = {10,20};
		//输
		cout << "userInfo.val1:" << userInfo.val1 << endl;			//输出 10
		cout << "userInfo.val2:" << userInfo.val2 << endl;			//输出 20

		UserInfo *pUserInfo = const_cast<UserInfo *>(&userInfo);
		//修改尝试
		pUserInfo->val1 = 30;
		pUserInfo->val2 = 40;

		cout << "pUserInfo->val1:" << pUserInfo->val1 << endl;		//输出 30
		cout << "pUserInfo->val2:" << pUserInfo->val2 << endl;		//输出 40

		//是不是很惊奇，居然改掉了。
		//注：这里虽然改掉了，但有可能在不同的平台会存在不同的结果，所以极不推荐在C++中修改const修饰的变量。
	}
	/*
		结论：const_cast仅在将const添加到原始非const时才是安全的变量。 
		尝试从原始const对象中删除const状态，并且然后对其执行写操作将导致不确定的行为.
	*/
	system("pause");
	return 0;
}