#include <iostream>

using namespace std;

int main() {
    int a[4][4], w = 0, x = 0, y = 0, z = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        w += a[0][i];
        x += a[1][i];
        y += a[2][i];
        z += a[3][i];
    }

    cout << w << ":" << x << endl;
    cout << y << ":" << z << endl;

    if (w > x && y > z) {
        cout << "Win";
    } else if (w < x && y < z) {
        cout << "Lose";
    } else {
        cout << "Tie";
    }
    return 0;
}
