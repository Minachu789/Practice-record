#include <iostream>
using namespace std;

int main() {
    int n, a, b, max;
    cin >> n;
    cin >> a;
    max = a;
    for (int i = 0; i < n - 1; i ++){
        cin >> b;
        if (max < b){
            max = b;
        }
    }
    
    cout << max;
}
