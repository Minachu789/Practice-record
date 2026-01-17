#include <iostream>

using namespace std;

int main() {
    int a, b, c, s = 0;
    for (int i = 1; i <= 5; i++){
        cin >> a >> b >> c;
        if (a + b > c && a + c > b && b + c > a){
            s++;
        }
    }
    
    cout << s;
    return 0;
}