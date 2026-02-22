#include <iostream>
using namespace std;

int main() {
    int f, n;
    cin >> f >> n;
    int y[n];
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    for (int j = 1; j <= n; j++) {
        cout << f << " ";
        // Win or Lose
        if (f == 0) {
            if (y[j - 1] == 2) {
                cout << ": Won at round " << j;
                break;
            } else if (y[j - 1] == 5) {
                cout << ": Lost at round " << j;
                break;
            }
        } else if (f == 2) {
            if (y[j - 1] == 5) {
                cout << ": Won at round " << j;
                break;
            } else if (y[j - 1] == 0) {
                cout << ": Lost at round " << j;
                break;
            }
        } else if (f == 5) {
            if (y[j - 1] == 0) {
                cout << ": Won at round " << j;
                break;
            } else if (y[j - 1] == 2) {
                cout << ": Lost at round " << j;
                break;
            }
        }

        if (j == n) {
            cout << ": Drew at round " << j;
            break;
        }

        if (j == 1) {
            f = y[0];
        } else if (y[j - 2] == y[j - 1]) {
           if (y[j - 2] == 0)
                f = 5;
            else if (y[j - 2] == 2)
                f = 0;
            else 
                f = 2;
        } else {
            f = y[j - 1];
        }
    }
    return 0;
}
