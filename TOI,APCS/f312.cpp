#include <iostream>
#include <climits>
using namespace std;

int main(){
  int y1, y2, n;
  int a1, b1, c1, a2, b2, c2;
  int max = INT_MIN;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
  for (int i = 0; i <= n; i++){
      y1 = (a1 * (i * i)) + (b1 * i) + c1;
      y2 = (a2 * (n - i) * (n - i)) + (b2 * (n - i)) + c2;
      if (max < y1 + y2){
          max = y1 + y2;
      }
  }
 
  cout << max;
  return 0;
}
