#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b - a < 0)
        cout << 100 - a + b;
    else
        cout << b - a;
}