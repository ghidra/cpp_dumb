#include "poly.h"

poly::poly()
{
    set_width(10);
    set_height(10);
}

poly::poly(const float & w, const float & h)
{
    set_width(w);
    set_height(h);
}

//destructor
poly::~poly() {}

//accessors
float poly::get_width() {return width;}
float poly::get_height() {return height;}

void poly::set_height(const float & w) {width = w;}
void poly::set_width(const float & h) {height = h;}