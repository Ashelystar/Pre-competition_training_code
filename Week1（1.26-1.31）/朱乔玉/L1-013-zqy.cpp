#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int fac = 1;  // 用于计算阶乘的因子
    for(int i = 1; i <= n; i++){
        fac *= i;
        sum += fac;
    }
    cout << sum;
    return 0;
}