#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) 
        swap(x, y);
    int sum = 0;
    for (int i = x; i <= y; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    
    cout << sum;
    return 0;
}