#include <iostream>
using namespace std;
int main() {
    int n, total = 0;
    cin >> n;
    int h[n];
    for  (int i = 0; i < n; i++){
        cin >> h[i];
    }

    for (int i = 0; i < n; i++){
        if (i == 0 && h[0] == 0)
            total += h[1];

        else if (i == n - 1 && h[n - 1] == 0)
            total += h[n - 2];

        else if (h[i] == 0)
            total += min(h[i - 1], h[i + 1]);
    }

    cout << total;
    return 0;
}
