#include <iostream>
using namespace std;

int main() {
    int v1 = 0;
    int v2 = 0;
    cout << "Please enter two numbers: ";
    cin >> v1 >> v2;
    cout << "The number between " << v1 << " and " << v2 << " is: " << endl;
    int min = v1 < v2 ? v1 : v2;;
    int max = v1 > v2 ? v1 : v2;;
    int i = min + 1;
    while (i < max) {
        cout << i << endl;
        ++i;
    };
    return 0;
}

