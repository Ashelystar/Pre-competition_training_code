#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m;
    char ch;
    cin >> h >> ch >> m;
    if(h < 12 || (h == 12 && m == 0)){
        // setfill('0') << setw(2) 格式控制，输出占两字符，不足补0
        cout << "Only " << setfill('0') << setw(2) << h << ':' << setfill('0') << setw(2) << m << ".  Too early to Dang.";
    }
    else{
        int cnt = h - 12 + ((m > 0) ? 1 : 0);   // 计算敲钟次数
        for(int i = 0; i < cnt; i++){
            cout << "Dang";
        }
    }
    return 0;
}