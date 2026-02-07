#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    char ch;
    cin >> N >> ch; 
    cin.ignore(); 
    
    string s;
    getline(cin, s); 
    
    int len = s.length();
    
    if (len >= N) {

        cout << s.substr(len - N);
    } else {

        int padCount = N - len;
        for (int i = 0; i < padCount; i++) {
            cout << ch;
        }
        cout << s;
    }
    
    cout << endl;
    return 0;
}