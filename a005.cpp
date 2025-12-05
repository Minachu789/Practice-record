#include <iostream>
using namespace std;

int main() {
    int times;
    int a[5]; // 5代表長度
    cin >> times;
    for (int i = 0; i < times; i ++){
        for (int j = 0; j < 4; j ++){
            cin >> a[j];
        }
        
        if(a[1] - a[0] == a[2] - a[1] && a[2] - a[1] == a[3] - a[2]){
            a[4] = a[3] + a[3] - a[2];
            for (int i = 0; i <= 4; i++){
                 cout << a[i] << " ";
            }
        }
        else if(a[1] / a[0] == a[2] / a[1] && a[2] / a[1]== a[3] / a[2]){
            a[4] = a[3] / a[2] * a[3];
            for (int i = 0; i <= 4; i ++){
                cout << a[i] << " ";
            }
        }
        
        cout << endl;
    }
    return 0;
}
