#include <bits/stdc++.h>

using namespace std;

void solve()
{
    float h, w;
    cin >> h >> w;
    w /= 2;

    auto dw = w - (h - 100) * 0.9;
    if (abs(dw) < (h - 100) * 0.9 * 0.1)
        cout << "You are wan mei!" << '\n';
    else if (dw > 0)
        cout << "You are tai pang le!" << '\n';
    else
        cout << "You are tai shou le!" << '\n';
}

int main()
{
    int n;
    std::cin >> n;

    while (n--)
        solve();
}