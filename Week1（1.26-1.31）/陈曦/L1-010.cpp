#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 3> vs;
    for (auto& v : vs)
        cin >> v;

    ranges::sort(vs);

    cout << vs[0] << "->" << vs[1] << "->" << vs[2] << '\n';
}