#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v1, v2;
    cin >> v1 >> v2;

    int n;
    cin >> n;
    for (int i = 0, ac = 0, bc = 0; i < n; ++i) {
        int ah, ahu;
        int bh, bhu;
        cin >> ah >> ahu >> bh >> bhu;

        int sum = ah + bh;
        if (ahu != bhu && ahu == sum) {
            ac++;
        }
        if (ahu != bhu && bhu == sum) {
            bc++;
        }
        if (ac > v1) {
            cout << "A\n"
                 << bc << '\n';
            break;
        }
        if (bc > v2) {
            cout << "B\n"
                 << ac << '\n';
            break;
        }
    }
}