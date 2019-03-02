#include <iostream>
using namespace std;
int main() {
    cout << "/*";
    cout << "*/";
    // cout << /* "*/" */; only this line is illegal comment
    cout << /* "*/" /* "/*" */;
    return 0;
}