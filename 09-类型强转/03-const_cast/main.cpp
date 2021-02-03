#include <iostream>
#include <windows.h>
using namespace std;

/*
	�﷨��ʽ��const_cast<type>(expression)
	���ó����������Ƴ���const��������û�ָ��ĳ�����(cast away the constness)ʹ��const_castȥ��const�������ú�ָ���޶���ͨ����
			  Ϊ�˺����ܹ����ܲ����򷵻�ֵ ��
	���ۣ���const���ú�ģ�������
	ע�⣺Ŀ��������ֻ����ָ�������
*/

void foo(int &a)
{
	a = 200;
	cout << "foo=" << a << endl;	//��� 200
}

int main()
{
	//ʾ��1
	//˵����const_cast ֻ������ָ������ã�ȥconst��
	{
		int a = 100;
		const int &ra = a;
		cout << "a=" << a << endl;		//��� a=100

		const_cast<int&>(ra) = 300;
		cout << "ra=" << ra << endl;	//��� ra=300
		cout << "a=" << a << endl;		//��� a=300

		const int *p = &a;
		*const_cast<int*>(p) = 400;
		cout << "*p=" << *p << endl;	//��� *p=400
	}

	//ʾ��2
	//˵����constһ�������Ը�
	{
		const int b = 20;
		int &rb = const_cast<int&>(b);
		rb = 30;
		cout << "b_address=" << &b << " b_val=" << b << endl;
		cout << "rb_address=" << &rb << " rb_val=" << rb << endl;
	}

	//ʾ��3
	//˵����const����������Լ�ʹ�ó���(��ʾ���õ����涨���foo����)
	{
		const int c = 100;
		//foo(c);	//err ����
		foo(const_cast<int&>(c));
		cout << "c=" << c << endl;		//��� 100
	}

	//ʾ��4
	//˵�����ṹ���ʹ��
	{
		struct UserInfo {
			int val1;
			int val2;
		};

		const UserInfo userInfo = {10,20};
		//��
		cout << "userInfo.val1:" << userInfo.val1 << endl;			//��� 10
		cout << "userInfo.val2:" << userInfo.val2 << endl;			//��� 20

		UserInfo *pUserInfo = const_cast<UserInfo *>(&userInfo);
		//�޸ĳ���
		pUserInfo->val1 = 30;
		pUserInfo->val2 = 40;

		cout << "pUserInfo->val1:" << pUserInfo->val1 << endl;		//��� 30
		cout << "pUserInfo->val2:" << pUserInfo->val2 << endl;		//��� 40

		//�ǲ��Ǻܾ��棬��Ȼ�ĵ��ˡ�
		//ע��������Ȼ�ĵ��ˣ����п����ڲ�ͬ��ƽ̨����ڲ�ͬ�Ľ�������Լ����Ƽ���C++���޸�const���εı�����
	}
	/*
		���ۣ�const_cast���ڽ�const��ӵ�ԭʼ��constʱ���ǰ�ȫ�ı����� 
		���Դ�ԭʼconst������ɾ��const״̬������Ȼ�����ִ��д���������²�ȷ������Ϊ.
	*/
	system("pause");
	return 0;
}