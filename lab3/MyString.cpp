#include "MyString.h"
#include <iostream>

MyString::MyString() {
	str = nullptr;
	std::cout << "Конструктор без параметров вызван" << std::endl;
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
}
