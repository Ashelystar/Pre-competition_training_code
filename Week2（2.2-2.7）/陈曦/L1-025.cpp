#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);

    auto space = str.find_first_of(' ');

    auto a = str.substr(0, space);
    auto b = str.substr(space + 1);

    auto ac = ranges::all_of(a, ::isdigit) && (stoi(a) >= 1 && stoi(a) <= 1000);
    auto bc = ranges::all_of(b, ::isdigit) && (stoi(b) >= 1 && stoi(b) <= 1000);

    cout << (ac ? a : "?") << " + " << (bc ? b : "?");
    if (ac && bc)
        cout << " = " << stoi(a) + stoi(b) << '\n';
    else
        cout << " = " << '?' << '\n';
}