#include <bits/stdc++.h>

using namespace std;

struct Frac {
    int64_t num = 0;
    int64_t den = 1;

    void norm()
    {
        const int64_t common = gcd(num, den);
        num /= common;
        den /= common;
    }
};

void operator+=(Frac& a, const Frac& b)
{
    const int64_t g = lcm(a.den, b.den);
    a.num = a.num * (g / a.den) + b.num * (g / b.den);
    a.den = g;

    a.norm();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    Frac frac;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;

        const auto pos = str.find('/');
        frac += Frac { stoll(str.substr(0, pos)), stoll(str.substr(pos + 1, str.size())) };
    }

    const int64_t k = frac.num / frac.den;
    const int64_t rem = frac.num % frac.den;

    if (k == 0 && rem == 0) {
        cout << 0;
    } else {
        if (k != 0)
            cout << k;
        if (k != 0 && rem != 0)
            cout << ' ';
        if (rem != 0) {
            if (k != 0)
                cout << abs(rem) << '/' << frac.den;
            else
                cout << rem << '/' << frac.den;
        }
    }
    cout << '\n';
}