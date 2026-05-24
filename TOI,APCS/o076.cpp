#include <iostream>

using namespace std;

int main() {
    int n, a, b, sum = 1, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0) {
            b = a;
        }
        
        if (a < b) {
            sum = sum + 1;
            b = a;
            if (sum > max) {
                max = sum;
            }
        }
        else {
            sum = 1;
            b = a;
        }
    }
    cout << max;

    return 0;
}
