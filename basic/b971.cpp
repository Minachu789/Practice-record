#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        cout << a;
    } else if (c > 0) {
        for (int i = a; i <= b; i += c) {
            cout << i << " ";
        }
    } else {
        for (int i = a; i >= b; i += c) {
            cout << i << " ";
        }
    }
    return 0;
}