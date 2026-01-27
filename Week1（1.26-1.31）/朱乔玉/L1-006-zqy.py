#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    
    ll tmp = sqrt(n);  //上限，如果长度大于等于2，那么起始必然小于等于根号n
    int maxlen = 0;      // 记录最长连续因子的长度
    ll start = 0; // 记录最长连续因子的起始数字

    // 枚举连续序列的起始数字 i
    for (ll i = 2; i <= tmp; i++) {
        ll cur = 1;
        ll j = i;
        while (true) {
            cur *= j;
            // 如果乘积已经超过 n，退出
            if (cur > n){
                break;
            }
            // 如果当前的乘积能整除 n
            if (n % cur == 0) {
                int curlen = j - i + 1;
                // 如果发现了更长的序列，更新结果
                if (curlen > maxlen) {
                    maxlen = curlen;
                    start = i;
                }
            }
            else {
                break;
            }
            j++;
        }
    }

    if (maxlen == 0) {
        cout << 1 << endl;
        cout << n << endl;
    }
    else {
        cout << maxlen << endl;
        for (int k = 0; k < maxlen; k++) {
            cout << start + k;
            if (k < maxlen - 1){
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}