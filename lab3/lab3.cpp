#include <iostream>
#include "MyString.h"

int main()
{
    MyString str1 = "Rere";

    MyString fake_str(str1);
    fake_str.print();

    fake_str.set("ха-ха лох");
    fake_str.print();

    return 0;
}  