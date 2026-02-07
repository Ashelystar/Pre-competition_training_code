#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cin.ignore();
    string str;
    getline(cin, str);

    auto col = ceil(1.f * str.size() / n);

    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < col; ++x) {
            size_t idx = n * (col - x - 1) + y;

            if (idx < str.size())
                cout << str[idx];
            else
                cout << ' ';
        }
        cout << '\n';
    }
}