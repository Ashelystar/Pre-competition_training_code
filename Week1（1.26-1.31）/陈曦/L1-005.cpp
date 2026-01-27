#include <bits/stdc++.h>

using namespace std;

std::unordered_map<int, pair<string, string>> vs { };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string a, c;
        int b;

        cin >> a >> b >> c;

        vs.emplace(b, pair { a, c });
    }

    cin >> n;

    for (int i = 0, idx; i < n; ++i) {
        cin >> idx;

        cout << vs[idx].first << ' ' << vs[idx].second << '\n';
    }
}