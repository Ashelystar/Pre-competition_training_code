#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    char c;
    cin >> n >> c;

    cin.ignore();
    string str;
    getline(cin, str);

    int need = n - str.size();
    if (need > 0)
        cout << string(need, c) << str << '\n';
    else
        cout << str.substr(str.size() - n) << '\n';
}