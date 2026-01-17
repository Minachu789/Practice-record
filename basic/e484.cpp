#include <iostream>

using namespace std;

int main() {
    int n, times = 0;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            times++;
        }
    }

    if (times <= 0) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}