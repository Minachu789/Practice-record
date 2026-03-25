#include <iostream>

using namespace std;

int main() {
    int k, x1, x2, y1, y2;
    cin >> k >> x1 >> y1 >> x2 >> y2;
    int step = 0;
    while (k > 0) {
        step += k;
        if (step % x1 == 0 && step % x2 == 0) {
            k -= (y1 + y2);
        }
        
        if (step % x1 == 0) {
            k -= y1;
        }
        
        if (step % x2 == 0) {
            k -= y2;
        }
    }

    cout << step;
    return 0;
}