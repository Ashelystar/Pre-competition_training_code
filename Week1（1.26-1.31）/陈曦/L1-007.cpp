#include <bits/stdc++.h>

using namespace std;

constexpr array table { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == '-') {
            cout << "fu";
        } else {
            cout << table[str[i] - '0'];
        }
        cout << (i == str.size() - 1 ? '\n' : ' ');
    }
}