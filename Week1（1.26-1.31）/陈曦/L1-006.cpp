#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint64_t n;
    cin >> n;

    vector<uint64_t> tmp;
    vector<uint64_t> res;
    uint64_t v = n;
    for (uint64_t start = 2; start * start <= n; ++start) {
        tmp.clear();
        v = n;
        for (uint64_t frac = start; frac <= n; ++frac) {
            if (v % frac == 0) {
                tmp.push_back(frac);
                v /= frac;
            } else {
                break;
            }
        }
        if (tmp.size() > res.size()) {
            res = tmp;
        }
    }

    if (res.size() == 0) {
        cout << 1 << "\n"
             << n << endl;
    } else {
        cout << res.size() << '\n';
        for (uint64_t i = 0; i < res.size(); ++i) {
            cout << res[i] << (i == res.size() - 1 ? '\n' : '*');
        }
    }
}