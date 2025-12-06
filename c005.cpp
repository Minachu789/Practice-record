#include <iostream>

using namespace std;

int main() {
    int n = 0;
    long long a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long z = 0;
        int t;
        cin >> t;
        for (int j = 1; j <= t; j++) {
            cin >> a >> b >> c;
            z = z + (a * c);
        }
        cout << z << endl;

    }
}
