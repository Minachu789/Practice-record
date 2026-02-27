#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        c[i] = a[i] * a[i] + b[i] * b[i];
    }

    int tt = 0;
    int max = c[0];
    for (int i = 1; i < n; i++){
        if (max < c[i]){
            tt = i;
            max = c[i];
        }
    }

    c[tt] = 0;
    max = c[0];
    for (int i = 0; i < n; i++){
        if (max <= c[i]){
            tt = i;
            max = c[i];
        }
    }

    cout << a[tt] << " " << b[tt];
    return 0;
}
