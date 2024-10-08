#include "MyString.h"
#include <iostream>
#include <fstream>

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
	const char uppercase[] = "QWERTYUIOPASDFGHJKLZXCVBNM";

	if (this->str != nullptr && strlen(this->str) == 10) {

		// Копия старой строки
		char* oldStr = new char[strlen(this->str) + 1];
		strcpy_s(oldStr, strlen(this->str) + 1, this->str);

		int j = 0;

		// Удаление заглавных букв
		for (int i = 0; this->str[i] != '\0'; ++i) {
			bool isUpper = false;

			for (int k = 0; uppercase[k] != '\0'; ++k) {
				if (this->str[i] == uppercase[k]) {
					isUpper = true;
					break;
				}
			}

			if (!isUpper) {
				this->str[j++] = this->str[i];
			}
		}
		this->str[j] = '\0';

		std::ofstream out("strings.txt");
		if (out.is_open()) {
			out << "Старая строка: " << oldStr << std::endl;
			out << "Новая строка: " << this->str << std::endl;
		}
		out.close();

		delete[] oldStr; 

		std::cout << "Строка обновлена" << std::endl;
	}
	else {
		std::cout << "Строка не равна 10 символам (или используются русские символы)" << std::endl;
	}
}

void MyString::print() {

	if (str != nullptr)
		std::cout << "Вывод строки --- " << str << std::endl;
	else
		std::cout << "Строка является пустой" << std::endl;
}
