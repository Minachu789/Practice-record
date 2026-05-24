#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int times;
    cin >> times;
   
    for (int i = 0; i < times; i++){
        cin >> s;
        int sum = 1;
        for (int j = 0; j < s.length(); j++){
            sum *= s[j] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}