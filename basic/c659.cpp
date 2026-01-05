#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    cout << b;

    while (cin >> b){
        cout << " " << a << " " << b;
    }
    return 0;
}