#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str, bs;
    getline(cin, str);
    getline(cin, bs);

    for (auto c : str | views::filter([bs](char c) { return bs.find(c) == string::npos; })) {
        cout << c;
    }
    cout << '\n';
}