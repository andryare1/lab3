#pragma once
class MyString
{
	char* str;

public:
	MyString();						  // конструктор без параметров
	MyString(const char* str);        // конструктор с параметрами
	MyString(const MyString& string); // конструтор копирования

	void set(const char* newStr);		  // метод ввода строки
	void update();					  // метод обновления строки по заданию
	void print();					  // метод вывода строки на экран

	~MyString();                      // деструктор
};

