#include <iostream>
using namespace std;

int main() {
    int times, z;
    cin >> times;
    int a[times];
    for (int i = 0; i < times; i ++){
        a[i] = i + 1;
    }
    
    for (int j = 0; j < 3; j ++){
        cin >> z;
        a[z - 1] = 0;
    }
    
    for (int i = times - 1; i >= 0; i --){
        if(a[i] != 0){
            cout << "No. " << a[i] << endl;
        }
    }
}
