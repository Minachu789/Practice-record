#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n] = {};
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int t = 0, l = 0, max = 0;
    for (int i = 1; i < n; i++){
        if (a[i - 1] > a[i]){
            l += 1;
        }l = 0; //TODO
        
        if (max < l)
            max = l;
        
    }
    
    cout << max;
    return 0;
}