#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidNumber(const string& s) {
    if (s.empty()) return false;
    
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    

    if (s[0] == '0' && s.length() > 1) return false;
    

    int num = stoi(s);
    return (num >= 1 && num <= 1000);
}

int main() {
    string input;
    getline(cin, input);
    

    size_t spacePos = input.find(' ');
    if (spacePos == string::npos) {
        return 0;
    }
    
    string strA = input.substr(0, spacePos);
    string strB = input.substr(spacePos + 1);
    
    bool validA = isValidNumber(strA);
    bool validB = isValidNumber(strB);
    
    if (validA) {
        cout << strA;
    } else {
        cout << "?";
    }
    
    cout << " + ";
    
    if (validB) {
        cout << strB;
    } else {
        cout << "?";
    }
    
    cout << " = ";
    
    if (validA && validB) {
        int a = stoi(strA);
        int b = stoi(strB);
        cout << a + b;
    } else {
        cout << "?";
    }
    
    cout << endl;
    
    return 0;
}