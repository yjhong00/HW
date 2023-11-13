#include <iostream>
#include "store.h"
using namespace std;

int main() {
    store A;
    A *= 2;

    cout << A.total() << endl;

    return 0;
}
