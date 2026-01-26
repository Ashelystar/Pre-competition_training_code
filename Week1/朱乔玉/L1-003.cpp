#include <bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin >> num;
    vector<int> res(10,0);
    for(int i = 0; i < num.size(); i++){
        res[num[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(res[i] != 0){
            cout << i << ':' << res[i] << endl;
        }
    }
    return 0;
}