#include <iostream>
#include <windows.h>
#include <string>
int main()
{
	//方式1
	{
		using namespace std;
		cout << "Examples1-namespace" << endl; //err
	}

	//方式2
	{
		std::cout << "Examples2-namespace" << std::endl;
	}

	//方式3
	{
		using std::cout; 
		using std::endl;
		cout << "Examples3-namespace" << endl; //err
	}
	system("pause");
	return 0;
}