#include <iostream>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int num[a][b];
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> num[i][j];
            }
        }

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                cout << num[j][i] << " ";
            }

            cout << endl;
        }
    }
}
