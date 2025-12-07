#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	n = t - 15;
	if (n <= -1){
		cout << n + 24;
	}else{
		cout << n;
	}
	
	return 0;
}
