#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 10> vs { };

    string N;
    cin >> N;

    for (auto c : N) {
        vs[c - '0']++;
    }

    for (size_t i = 0; i < vs.size(); ++i) {
        if (vs[i] != 0) {
            cout << i << ':' << vs[i] << '\n';
        }
    }
}