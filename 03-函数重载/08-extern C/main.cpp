#include <iostream>
//#include <string>
#include <windows.h>
#include <string.h>
using namespace std;

/*
	C/C++ 的编绎都是以文件为单位进行编译的。
	Name Mangling(命名倾轧)，依据函数声明来进行倾轧。若声明被倾轧，则调用为倾轧
版本，若声明为非倾轧版本，则调用也为非倾轧版本。
	C++ 默认所有函数倾轧。若有特殊函数不参与倾轧，则要使用 extercn "C" 来进行声明。
*/

/*
	例如下面的方法1与方法2，编绎后的对应分别为：
	方法1=get
	方法2=getc
*/

//使用 extern "C" 声明 方法不参与倾轧
extern "C" {
	//方法1（不参与倾轧）
	void get(int a) {

	}
}

//方法2（参与倾轧）
void get(char a) {

}

int main() {
	system("pause");
	return 0;
}