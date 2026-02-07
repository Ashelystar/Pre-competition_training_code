#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vs(n);
    for (auto &v : vs) {
        cin >> v;
    }

    auto odd = ranges::count_if(vs, [](auto v) { return v % 2; });
    cout << odd << ' ' << n - odd << '\n';
}