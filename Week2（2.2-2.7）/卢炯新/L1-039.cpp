#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); 
    
    string s;
    getline(cin, s);
    
    int len = s.length();
    int cols = (len + N - 1) / N; 
    

    vector<vector<char>> matrix(N, vector<char>(cols, ' '));
    

    int index = 0;
    for (int c = cols - 1; c >= 0 && index < len; c--) {
        for (int r = 0; r < N && index < len; r++) {
            matrix[r][c] = s[index++];
        }
    }
    
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < cols; c++) {
            cout << matrix[r][c];
        }
        cout << endl;
    }
    
    return 0;
}