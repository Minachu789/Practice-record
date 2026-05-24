#include <iostream>

using namespace std;

int w(int a, int b, int n, int t[]) {
    int z = a + b;
    int total = 0, use;
    for (int i = 0; i < n; i++) {
        use = t[i] % z;
        if (use - a >= 0) {
            total += z - use;
        }
    }
    return total;
}

int main() {
    int a, b, n, t[30];
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    cout << w(a, b, n, t) << endl;
    return 0;
}
