#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char ch;
    cin >> n >> ch;

    // 计算最大k，使得 2*k*k - 1 <= n
    int k = 0;
    while (2 * (k + 1) * (k + 1) - 1 <= n){
        k++;
    }

    int used = 2 * k * k - 1;

    // 上半部分
    for (int i = k; i >= 1; i--) {
        cout << string(k - i, ' ');   //输出 k-i 个空格
        cout << string(2 * i - 1, ch); //输出 2*i-1 个字符ch
        cout << endl;
    }

    // 下半部分
    for (int i = 2; i <= k; i++) {
        cout << string(k - i, ' ');
        cout << string(2 * i - 1, ch);
        cout << endl;
    }

    cout << n - used;
    return 0;
}
