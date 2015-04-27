#include "rectangle.h"

rectangle::rectangle()
{
    set_width(10);
    set_height(10);
}

rectangle::rectangle(const float & w, const float & h)
{
    set_width(w);
    set_height(h);
}

rectangle::~rectangle()
{
}

float rectangle::area()
{
    return get_width() * get_height();
}