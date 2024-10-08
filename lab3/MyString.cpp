#include "MyString.h"
#include <iostream>

MyString::MyString() {

	str = nullptr;

	std::cout << "Конструктор без параметров вызван" << std::endl;
}

MyString::MyString(const char* str) {

	this->str = new char[strlen(str) + 1];
	strcpy_s(this->str, strlen(str) + 1, str);

	std::cout << "Конструктор с параметром вызван" << std::endl;
}

MyString::MyString(const MyString& str) {

	if (str.str != nullptr) {
		this->str = new char[strlen(str.str) + 1];
		strcpy_s(this->str, strlen(str.str) + 1, str.str);
	}
	else
		this->str = nullptr;

	std::cout << "Конструктор копирования вызван" << std::endl;
}

MyString::~MyString() {

	delete[] str;

	std::cout << "Деструктор вызван" << std::endl;
}

void MyString::set(const char* newStr) {

	if (str != nullptr) {

		delete[] this->str;

		this->str = new char[strlen(newStr) + 1];
		strcpy_s(this->str, strlen(newStr) + 1, newStr);
	}
	std::cout << "Строка записана" << std::endl;
}

void MyString::update() {

	std::cout << "Строка обновлена" << std::endl;
}

void MyString::print() {

	if (this->str != nullptr)
		std::cout << "Вывод строки --- " << str << std::endl;
	else
		std::cout << "Строка является пустой" << std::endl;
}
