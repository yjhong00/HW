// store.h
#pragma once
#include "fruit.h"

class store {
public:
    store();
    store(int a, int b, int c, float d, float e, float f);

    fruit apple, pear, peach;
    float total();
    float total(float);
    store& operator*=(int factor);
    store operator+(store&);
};