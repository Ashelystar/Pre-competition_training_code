#include <bits/stdc++.h>

using namespace std;

constexpr array z2m { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
constexpr array wei { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
bool passed = true;

void check()
{
    string str;
    cin >> str;

    int z = 0;
    for (int i = 0; i < 17; ++i) {
        if (!std::isdigit(str[i])) {
            cout << str << '\n';
            passed = false;
            return;
        }
        z += wei[i] * (str[i] - '0');
    }

    if (z2m[z % 11] != str.back()) {
        cout << str << '\n';
        passed = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        check();
    }

    if (passed) {
        cout << "All passed" << '\n';
    }
}