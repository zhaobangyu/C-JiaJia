#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	
	//C����
	{
		int *p = (int*)malloc(sizeof(int));
		*p = 100;
		cout << "C p=" << *p << endl;	//��� C p=100
		free(p);
	}

	//C++����
	{
		//��ʽ1(ֻnew����ʼ��ֵ)
		int *p1 = new int;
		*p1 = 100;

		//��ʽ2(��ʼ��ֵ)
		int *p2 = new int(100);	

		//����intָ��
		int **p3 = new int *;
		int p3_val = 200;
		*p3 = &p3_val;

		cout << "C++ p1=" << *p1 << " p2=" << *p2 << " p3=" << p3 << endl;
		//��� C++ p1=100 p2=100 p3=000001E6EF592A10
	}

	system("pause");
	return 0;
}