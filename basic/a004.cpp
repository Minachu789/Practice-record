#include <iostream>
using namespace std;
int main(){
	int y;
	int i = 0;
	while (i != 100){
	cin >> y;
	if (y % 4 == 0){
		cout << "平年" << endl;
	} else {
		cout << "閏年" << endl;
	}
	i += 1;
	}
	return 0;
}
