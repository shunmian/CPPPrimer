#include <iostream>
using namespace std;

int main() {
    int v = 0;
    int sum = 0;
    cout << "Please enter numbers for sum: ";
    while (cin >> v) {
        sum += v;
    };
    cout << "The sum is: " << sum << endl;
    return 0;
}

