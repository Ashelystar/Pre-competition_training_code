#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    int len = 0;
    bool negative = false;
    bool even = false;

    if (str.front() == '-') {
        len = str.size() - 1;
        negative = true;
    } else {
        len = str.size();
    }

    if ((str.back() - '0') % 2 == 0) {
        even = true;
    }

    auto count = ranges::count_if(str, [](char c) { return c == '2'; });
    cout << fixed << setprecision(2);
    cout << static_cast<double>(count) / static_cast<double>(len) * (negative ? 1.5 : 1.0) * (even ? 2 : 1) * 100 << "%\n";
}