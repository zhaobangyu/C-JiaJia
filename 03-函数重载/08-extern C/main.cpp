#include <iostream>
//#include <string>
#include <windows.h>
#include <string.h>
using namespace std;

/*
	C/C++ �ı��ﶼ�����ļ�Ϊ��λ���б���ġ�
	Name Mangling(��������)�����ݺ��������������������������������������Ϊ����
�汾��������Ϊ�������汾�������ҲΪ�������汾��
	C++ Ĭ�����к����������������⺯����������������Ҫʹ�� extercn "C" ������������
*/

/*
	��������ķ���1�뷽��2�������Ķ�Ӧ�ֱ�Ϊ��
	����1=get
	����2=getc
*/

//ʹ�� extern "C" ���� ��������������
extern "C" {
	//����1��������������
	void get(int a) {

	}
}

//����2������������
void get(char a) {

}

int main() {
	system("pause");
	return 0;
}