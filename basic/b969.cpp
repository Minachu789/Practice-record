#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line, greeting;
    
    getline(cin, line);
    getline(cin, greeting);
    
    stringstream ss(line);
    string name;
    
    while (ss >> name) {
        cout << greeting << ", " << name << endl;
    }
    
    return 0;
}
