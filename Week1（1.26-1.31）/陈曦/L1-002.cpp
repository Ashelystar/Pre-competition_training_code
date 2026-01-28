#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    char c;
    cin >> n >> c;

    int k = 1;
    while (2 * (k + 1) * (k + 1) - 1 <= n) {
        k++;
    }

    int used = 2 * k * k - 1;
    int max_w = 2 * k - 1;

    for (int i = k; i >= 1; --i) {
        int width = 2 * i - 1;
        int spaces = (max_w - width) / 2;
        cout << string(spaces, ' ') << string(width, c) << '\n';
    }

    for (int i = 2; i <= k; ++i) {
        int width = 2 * i - 1;
        int spaces = (max_w - width) / 2;
        cout << string(spaces, ' ') << string(width, c) << '\n';
    }

    cout << n - used << '\n';
}