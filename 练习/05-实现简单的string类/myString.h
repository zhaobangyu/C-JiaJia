#pragma once
class myString
{
private:
	char * _str;
public:
	//������
	myString();
	myString(char *str);
	//������
	~myString();
	//����������
	myString(const myString & another);
	//��ֵ���������
	myString& operator=(const myString & another);
	//+���������
	myString operator+(const myString & another);
	//>���������
	bool operator>(const myString & another);
	//<���������
	bool operator<(const myString & another);
	//==���������
	bool operator==(const myString & another);
	//[]���������
	char &operator[](int index);

	//�����ַ
	char ** outPutAddress();

	//����char
	char * c_str();
};

