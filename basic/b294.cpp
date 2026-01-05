#include <iostream>
using namespace std;

int main() {
    int days, x, sum;
    cin >> days;
    for (int i = 1; i <= days; i++){
        cin >> x;
        sum += x * i;
    }
    
    cout << sum - 1;
}