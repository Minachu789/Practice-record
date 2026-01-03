#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = -1;
        c[i] = -1;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";

        if (a[i] < 60) {
            b[i] = a[i];
        } else if (a[i] >= 60) {
            c[i] = a[i];
        }
    }

    cout << endl;

    int q = n - 1;
    while (q >= 0) {
        if (b[q] != -1) {
            cout << b[q] << endl;
            break;
        }
        q--;
    }
    if (q == -1) {
        cout << "best case" << endl;
    }

    int p = 0;
    while (p <= n - 1) {
        if (c[p] != -1) {
            cout << c[p] << endl;
            break;
        }
        p++;
    }
    if (p == n) {
        cout << "worst case" << endl;
    }
    return 0;
}
