#include <iostream>
using namespace std;
int main (){
	int t;
	cin >> t;
	if (t <= 25){
		cout << 25 - t;
	}else{
		cout << 60 - t + 25;
	}
	return 0;
}
