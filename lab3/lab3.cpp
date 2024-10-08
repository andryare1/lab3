#include <iostream>
#include "MyString.h"

int main()
{
    //MyString str1();
    MyString* str2 = new MyString();

    //str1.print();
    str2->print();

    delete str2;

    return 0;
}  