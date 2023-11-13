#include "fruit.h"

fruit::fruit() {
    price = 200; many = 2; // default values
}

fruit::fruit(float p, int n) {
    price = p;
    many = n;
}

float fruit::show() {
    return price * many;
}
