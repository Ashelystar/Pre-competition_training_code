#include <bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin >> num;
    vector<int> res(10,0);  // 存放0-9数字出现的次数
    for(int i = 0; i < num.size(); i++){
        res[num[i]-'0']++;  // 将对应数字的计数加1
    }
    for(int i=0;i<10;i++){
        if(res[i] != 0){
            cout << i << ':' << res[i] << endl;
        }
    }
    return 0;
}