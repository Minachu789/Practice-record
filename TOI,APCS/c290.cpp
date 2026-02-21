#include <iostream>
using namespace std;

int main(){
    char c;
    int times = 0;
    int ans = 0, b = 0;
    while(cin >> c) {
        int num = c - '0'; // char to int
        times ++;
        if (times % 2 != 0){
            ans += num;
        } else {
            ans -= num;
        }
    }
    if (ans < 0)
        cout << -ans << "\t";
    else
        cout << ans << "\t";
}
