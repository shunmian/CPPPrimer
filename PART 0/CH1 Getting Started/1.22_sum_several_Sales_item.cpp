#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item total, next;
    cin >> total;
    while (cin >> next) {
        total += next;
    }
    cout << total << endl;
    return 0;
}
