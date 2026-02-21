#include <iostream>
using namespace std;
int main() {
    int a[14], n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int bad = 0;
        for (int j = 0; j < 14; j++) {
            cin >> a[j];
        }

        if (a[1] == a[3] || a[1] != a[5] || a[8] == a[10] || a[8] != a[12]) {
            bad ++;
            cout << "A";
        }

        if (a[6] == 0 || a[13] == 1) {
            bad ++;
            cout << "B";
        }

        if (a[1] == a[8] || a[3] == a[10] || a[5] == a[12]) {
            bad ++;
            cout << "C";
        }

        if (bad == 0)
            cout << "None";

        cout << endl;
    }
    return 0;
}
