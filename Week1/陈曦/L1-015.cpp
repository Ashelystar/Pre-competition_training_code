#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    char c;
    cin >> n >> c;

    for (int i = 0; i < (n + 1) / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << c;
        }
        cout << '\n';
    }
}