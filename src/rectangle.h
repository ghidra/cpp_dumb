#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "poly.h"

class rectangle : public poly
{
    public:
        //constructor
        rectangle();
        rectangle(const float & w, const float & h);

        //destructor
        ~rectangle();

        //this doesn't need to be virtual since the derived class doesn't override this method
        float area();
};

#endif