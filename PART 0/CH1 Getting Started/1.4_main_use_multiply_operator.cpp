#include <iostream>
using namespace std;
int main() {
    int v1 = 0;
    int v2 = 0;
    cout << "Please input 2 integers: " << endl;
    cin >> v1 >> v2;
    cout << "The product of "
         << v1
         << " and "
         << v2
         << " is: "
         << v1 * v2
         << endl; 
    return 0;
}