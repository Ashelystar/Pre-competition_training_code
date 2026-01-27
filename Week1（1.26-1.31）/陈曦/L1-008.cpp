#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;

    vector<int> vs(r - l + 1);
    iota(vs.begin(), vs.end(), l);

    int frow = vs.size() / 5;
    for (int i = 0; i < frow; ++i) {
        for (int j = 0; j < 5; ++j) {
            auto idx = i * 5 + j;
            cout << setw(5) << vs[idx];
        }
        cout << '\n';
    }

    for (size_t i = 0; i < vs.size() % 5; ++i) {
        cout << setw(5) << vs[frow * 5 + i];
    }
    if (vs.size() % 5) {
        cout << '\n';
    }

    cout << "Sum = " << (l + r) * (r - l + 1) / 2 << '\n';
}