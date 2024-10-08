#pragma once
class MyString
{
	char* str;

public:
	MyString();
	MyString(const char* str);
	void set();
	void update();
	void print();
	~MyString();
};

