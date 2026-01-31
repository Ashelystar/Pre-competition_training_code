#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;  // 统计2的出现次数
    double weight = 1.0;
    if(s[0] == '-'){
        weight *= 1.5;  //判断负数
    }
    if((s[s.size()-1] - '0') % 2 == 0){
        weight *= 2.0;  // 判断偶数
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '2'){
            cnt++;
        }
    }
    int len = (s[0] == '-') ? s.size()-1 : s.size();   // 若为负数则数字的位数要比字符串长度减一
    cout << fixed << setprecision(2) << cnt * 100.0 / len * weight << '%';
    return 0;
}