#include <iostream>
#include <windows.h>
using namespace std;

/*
	�﷨��ʽ��reinterpret_cast<type>(expression)
	���ó�����ͨ��Ϊ��������λģʽ�ṩ�ϵͲ�����½��͡�Ҳ����˵�������Զ����ƴ�����ʽ�����½��ͣ�
			  ��˫�����϶���������������ת���ģ�����Ҫ�ؽ�������ת������
*/

int main()
{
	{
		int val1 = 10;
		float val2 = 10.55;

		int *p = &val1;
		float *q = &val2;

		//p = q;	//err
		//q = p;	//err

		//p = static_cast<int*>(q);		//err
		//q = static_cast<float*>(p);	//err

		p = reinterpret_cast<int*>(q);
		q = reinterpret_cast<float*>(p);
	}
	system("pause");
	return 0;
}