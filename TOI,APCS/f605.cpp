#include <iostream>
using namespace std;
int main() {
    int n, d;
    int a, b, c;
    int times = 0, cost = 0;
    cin >> n;
    cin >> d;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c;

        for (int j = 1; j <= 2; j++){
            if (a > b)
                swap (a, b);
            if (b > c)
                swap (b, c);
            if (a > c)
                swap (a, c);
        }
    
            if (c - a >= d){
                times ++;
                cost += (a + b + c) / 3;
            }
    }

    cout << times << " " << cost;
}
