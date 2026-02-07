#include <bits/stdc++.h>

using namespace std;

using u64 = uint64_t;
using u128 = __uint128_t;

u64 qpow(u64 a, u64 b, u64 m)
{
    u64 res = 1;
    for (a %= m; b > 0; b >>= 1, a = (u128)a * a % m) {
        if (b & 1)
            res = (u128)res * a % m;
    }
    return res;
}

bool is_prime(u64 n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;

    const int r = std::countr_zero(n - 1);
    const u64 d = (n - 1) >> r;

    static constexpr u64 bases[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };

    auto check_base = [&](u64 a) {
        if (n <= a)
            return true;
        u64 x = qpow(a, d, n);
        if (x == 1 || x == n - 1)
            return true;

        for (int i = 0; i < r - 1; ++i) {
            x = (u128)x * x % n;
            if (x == n - 1)
                return true;
        }
        return false;
    };

    return ranges::all_of(bases, check_base);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        u64 n;
        cin >> n;
        cout << (is_prime(n) ? "Yes" : "No") << '\n';
    }
}