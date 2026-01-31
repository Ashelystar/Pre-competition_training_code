#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char ch;
    cin >> n >> ch;
    for(int i = 0; i < round(n/2.0); i++){  //round() c++四舍五入
        for(int j = 0; j < n; j++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}