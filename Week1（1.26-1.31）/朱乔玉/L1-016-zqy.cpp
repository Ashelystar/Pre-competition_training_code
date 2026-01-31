#include <bits/stdc++.h>
using namespace std;

const array<char,11> M = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
const array<int,17> weights = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

bool check(string id){
    int sum = 0;
    for(int i = 0; i < 17; i++){
        if(!isdigit(id[i])){  //出现非数字直接return false
            return false;
        }
        sum += (id[i] - '0') * weights[i];  // 计算加权和
    }
    if(M[sum % 11] == id[17]){  // 根据对应规则进行匹配
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    string id;
    int cnt = 0;  // 统计错误id数目
    for(int i = 0; i < n; i++){
        cin >> id;
        if(!check(id)){   // 每次输入check(id)
            cout << id << endl;
            cnt++;
        }
    }
    if(cnt == 0){
        cout << "All passed";
    }
    return 0;
}