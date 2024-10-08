#include "MyString.h"
#include <iostream>

MyString::MyString() {
	str = nullptr;
	std::cout << "Конструктор без параметров вызван" << std::endl;
}

MyString::MyString(char* str) {
	/*this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);*/
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);

	std::cout << "Конструктор с параметром вызван" << std::endl;
}

MyString::~MyString() {
	delete[] str;
	std::cout << "Деструктор вызван" << std::endl;
}

void MyString::set() {
	std::cout << "Строка записана" << std::endl;
}

void MyString::update() {

}

void MyString::print() {
	std::cout << str << std::endl;
	std::cout << "Строка выведена на экран" << std::endl;
}
