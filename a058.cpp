#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    int a[3] = {0, 0, 0};
    for (int i = 0; i < x; i++)
    {
        cin >> y;
        if (y % 3 == 0)
        {
            a[0] = a[0] + 1;
        }
        else if (y % 3 == 1)
        {
            a[1] = a[1] + 1;
        }
        else
        {
            a[2] = a[2] + 1;
        }
    }
    cout << a[0]  << " " << a[1] << " " << a[2];
}