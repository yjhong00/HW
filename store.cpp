// store.cpp
#include "store.h"

store::store() {}

store::store(int a, int b, int c, float d, float e, float f) {
    apple = fruit(d, a);
    pear = fruit(e, b);
    peach = fruit(f, c);
}

float store::total() {
    float x = apple.show();
    x += pear.show();
    x += peach.show();
    return x;
}

float store::total(float exchangeRate) {
    return total() / exchangeRate;
}

store& store::operator*=(int factor) {
    apple.many *= factor;
    pear.many *= factor;
    peach.many *= factor;
    return *this;
}

store store::operator+(store& b) {
    store c;
    c.apple.many = apple.many + b.apple.many;
    c.pear.many = pear.many + b.pear.many;
    c.peach.many = peach.many + b.peach.many;
    if (apple.price < b.apple.price) c.apple.price = apple.price;
    else  c.apple.price = b.apple.price;
    if (pear.price < b.pear.price) c.pear.price = pear.price;
    else  c.pear.price = b.pear.price;
    if (peach.price < b.peach.price) c.peach.price = peach.price;
    else  c.peach.price = b.peach.price;
    return c;
}
