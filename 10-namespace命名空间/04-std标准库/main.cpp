#include <iostream>
#include <windows.h>
#include <string>
int main()
{
	//��ʽ1
	{
		using namespace std;
		cout << "Examples1-namespace" << endl; //err
	}

	//��ʽ2
	{
		std::cout << "Examples2-namespace" << std::endl;
	}

	//��ʽ3
	{
		using std::cout; 
		using std::endl;
		cout << "Examples3-namespace" << endl; //err
	}
	system("pause");
	return 0;
}