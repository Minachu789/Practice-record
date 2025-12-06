#include <iostream>
using namespace std;

int main() {
    int a, b, r, n = 0;
    cin >> r;
    for (int i= 0; i < r; i ++){
        cin >> a >> b;
        
        if (a % 2 == 0){
            a = a + 1;
        }
        
        if (b % 2 == 0){
            b = b - 1;
        }
        
        for (int j = a; j <= b; j += 2){
            n = n + j;
        }

        cout << "Case " << i + 1 << ": " << n << endl;
        n = 0;
    }
}
