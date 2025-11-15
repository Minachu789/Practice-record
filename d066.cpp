#include <iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	if (x > 7 && x < 17){
		cout << "At School";
	}else if (x == 7){
		if (y >= 30){
			cout << "At School";
		}else{
			cout << "Off School";
		}
	}else{
		cout << "Off School";
	}
	return 0;
}
