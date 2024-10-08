#include <iostream>
#include "MyString.h"

int main()
{
    MyString str1("Строка");
    MyString* str2 = new MyString("Строка");

    str1.print();
    str2->print();

    return 0;
}