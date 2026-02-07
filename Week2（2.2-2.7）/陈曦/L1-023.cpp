#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    auto v = str | views::transform(::tolower);

    auto gc = ranges::count(v, 'g');
    auto pc = ranges::count(v, 'p');
    auto lc = ranges::count(v, 'l');
    auto tc = ranges::count(v, 't');

    for (auto i = 0; i < ranges::max({ gc, pc, lc, tc }); ++i) {
        if (i < gc) cout << 'G';
        if (i < pc) cout << 'P';
        if (i < lc) cout << 'L';
        if (i < tc) cout << 'T';
    }
    cout << '\n';
}