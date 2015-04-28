#include "rectangle.h"

#include <iostream>

int main()
{
    poly * shape = new rectangle(20,20);
    std::cout << "area:" << shape->area() << std::endl;
    std::cout << "width:" << shape->get_width() << std::endl;
    std::cout << "height:" << shape->get_height() << std::endl;

    return 0;
}