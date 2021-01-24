#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	char a;
	int b;
	char c[100];

	//scanf 和 cin 对比
	{
		//scanf_s("%c %d %s", &a, &b, c);
		//printf("a=%c b=%d c=%s\n", a, b, c);

		//注：cin >> a >> b >> c 等价于 cin >> a; cin >> b; cin >> c;
		//cin >> a >> b >> c;
		//cout << "a=" << a << " b=" << b << " c=" << c << endl;
	}

	//char 与其它类型混淆
	{
		//scanf_s("%d%c",&a,&b);
		//printf("a=%c b=%d\n", a, b);

		//注：cin >> b >> a; 等价于 cin >> b; cin >> a;
		//cin >> b >> a;
		//cout << "a=" << a << " b=" << b << endl;
	}

	//更安全的输入字符串
	{
		//fgets(c, 10, stdin);
		//printf("c=%s\n", c);df

		//cin.getline(c, 10);	//遇回车或n-1个字符 
		//cout << "c=" << c << endl;

		string s;
		cin >> s;
		cout << s << endl;
	}

	system("pause");
}