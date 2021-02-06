#pragma once

template <typename T> 
class Statck
{
public:
	Statck(int size = 1024)
	{
		length = 0;
		pSpace = new T[size];
	}

	~Statck()
	{
		delete[]pSpace;
	}

	//添加数据
	void push(T val)
	{
		pSpace[index++] = val;
		length++;
	}

	//弹出数据
	T pop()
	{
		return pSpace[--index];
	}

	//输出数据
	void dis()
	{
		for (int i = 0; i < length; i++) {
			cout << pSpace[i] << endl;
		}
	}

private:
	T *pSpace;
	int index;
	int length;
};

