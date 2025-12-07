#include <iostream>
using namespace std;
int main(){
	int x, y, z;
	cin >> x;
	y = (x / 12) * 50;
	z = (x % 12) * 5;
	cout << z + y;
	return 0;
}
