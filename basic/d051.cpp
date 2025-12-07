#include <iostream>
#include <iomanip> 
using namespace std;
int main(){
	float x;
	cin >> x;
	cout << fixed; 
	cout << setprecision(3) << (x - 32) * 5 / 9; 
	return 0;
}
