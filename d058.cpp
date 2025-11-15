#include <iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	if (x == 0){
		cout << "0";
	}else if(x * -1 > 0){
		cout << "-1";
	}else{
		cout << "1";
	}
	return 0;
}
