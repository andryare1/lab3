#include <iostream>
#include "MyString.h"

int main()
{
    MyString str("Hello World!");
    MyString new_str(str);

    new_str.print();
    new_str.set("helloHELLO");
    new_str.print();
    new_str.update();
    new_str.print();

    return 0;
}  