#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	char a;
	int b;
	char c[100];

	//scanf �� cin �Ա�
	{
		//scanf_s("%c %d %s", &a, &b, c);
		//printf("a=%c b=%d c=%s\n", a, b, c);

		//ע��cin >> a >> b >> c �ȼ��� cin >> a; cin >> b; cin >> c;
		//cin >> a >> b >> c;
		//cout << "a=" << a << " b=" << b << " c=" << c << endl;
	}

	//char ���������ͻ���
	{
		//scanf_s("%d%c",&a,&b);
		//printf("a=%c b=%d\n", a, b);

		//ע��cin >> b >> a; �ȼ��� cin >> b; cin >> a;
		//cin >> b >> a;
		//cout << "a=" << a << " b=" << b << endl;
	}

	//����ȫ�������ַ���
	{
		//fgets(c, 10, stdin);
		//printf("c=%s\n", c);df

		//cin.getline(c, 10);	//���س���n-1���ַ� 
		//cout << "c=" << c << endl;

		string s;
		cin >> s;
		cout << s << endl;
	}

	system("pause");
}