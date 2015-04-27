#include "rectangle.h"

#include <iostream>

int main()
{
    poly * shape = new rectangle(20,20);
    std::cout << "area:" << shape->area();

    return 0;
}