#pragma once
class MyString
{
	char* str;

public:
	MyString();
	MyString(char* str);
	void set();
	void update();
	void print();
	~MyString();
};

