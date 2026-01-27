#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// 求最大公约数
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// 化简分数
void simp(ll &a, ll &b) {
    if (a == 0) {
        b = 1;   // 若分子为0，化简为0/1
        return;
    }
    // 分子分母同时除以最大公约数来化简分数
    ll tmp = gcd(abs(a), b);
    a /= tmp;
    b /= tmp;
}

int main() {
    int n;
    cin >> n;

    // 初始化和为 0/1
    ll sum_a = 0;
    ll sum_b = 1;

    // 每次输入就做加法计算和防止溢出
    for (int i = 0; i < n; i++) {
        ll a, b;  // 分子，分母
        char ch;  // '/'
        cin >> a >> ch >> b;
        // 通分相加: sum_a/sum_b + a/b ,新分母为最小公倍数 lcm(sum_b, b)
        // lcm(x, y) = (x * y) / gcd(x, y)
        ll lcm = sum_b * b / gcd(sum_b, b);

        // 更新分子: 新分子 = 旧分子 * (新分母 / 旧分母)
        sum_a = sum_a * (lcm / sum_b) + a * (lcm / b);
        sum_b = lcm;
        simp(sum_a, sum_b);
    }

    if (sum_a == 0) {
        cout << 0 << endl;
    } 
    else if (sum_b == 1) { // 结果是整数
        cout << sum_a << endl;
    } 
    else {  // 结果是分数
        ll intnum = sum_a / sum_b;  //整数部分
        ll renum = sum_a % sum_b;   // 分数部分
        if (intnum != 0) {   //整数部分不为零
            cout << intnum << ' ' << abs(renum) << '/' << sum_b << endl;
        } else {
            cout << renum << '/' << sum_b << endl;
        }
    }
    return 0;
}