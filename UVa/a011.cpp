#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int n = 0, l;
    getline(cin, s);
    l = s.length();
    
    for(int i = 0; i < l; i++){
        if (isalpha(s[i]) && !isalpha(s[i + 1])){
            n++;
        }
    }
    
    cout << n;
    return 0;
}