#include <iostream>
#include "store.h"
using namespace std;

int main() {
    store A;
    A *= 2;  // Double the quantity of each fruit in store A

    cout << A.total() << endl;  // Display the new total after multiplication

    return 0;
}
