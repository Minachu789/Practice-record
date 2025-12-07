#include <iostream>

using namespace std;

int main() {
    int times;
    cin >> times;
    for (int i = 1; i <= times; i++) {
        int n, max, min;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        max = a[0];
        min = a[0];
        for (int j = 1; j < n; j++) {

            if (max < a[j]) {
                max = a[j];
            }
            if (min > a[j]) {
                min = a[j];
            }
        }

        cout << (max - min) * 2 << endl;
    }
}
