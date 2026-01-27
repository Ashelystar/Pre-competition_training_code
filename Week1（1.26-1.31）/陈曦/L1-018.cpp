#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int hh = stoi(str.substr(0, 2));
    int mm = stoi(str.substr(3, 5));

    if (0 <= hh && hh + !!mm <= 12) {
        cout << "Only " << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ".  Too early to Dang." << '\n';
    } else {
        string res;
        for (int i = 0; i < hh + !!mm - 12; ++i) {
            res.append("Dang");
        }
        cout << res << '\n';
    }
}