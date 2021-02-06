#include "Down.h"
#include <iostream>
using namespace std;

Down::Down()
{
	cout << "Down::Down()" << endl;
}

Down::Down(const Down & another)
{
	cout << "Down::Down(const Down & another)" << endl;
}


Down::~Down()
{
	cout << "Down::~Down()" << endl;
}
