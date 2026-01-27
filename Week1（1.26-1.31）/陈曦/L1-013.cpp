#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int fac = 1;
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        fac *= i;
        ans += fac;
    }

    cout << ans << '\n';
}