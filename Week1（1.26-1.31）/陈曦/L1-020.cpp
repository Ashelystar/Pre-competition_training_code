#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_set<string> vs { };
    unordered_set<string> qs { };

    int n;
    cin >> n;

    for (int i = 0, cnt; i < n; ++i) {
        cin >> cnt;
        for (int idx = 0; idx < cnt; ++idx) {
            string id;
            cin >> id;
            if (cnt > 1) {
                vs.insert(id);
            }
        }
    }

    int m;
    cin >> m;
    bool found = false;
    bool first = true;

    for (int i = 0; i < m; ++i) {
        string str;
        cin >> str;
        if (qs.find(str) == qs.end() && vs.find(str) == vs.end()) {
            if (!first) {
                cout << ' ';
            }

            cout << str;

            first = false;
            found = true;
            qs.insert(str);
        }
    }

    if (!found) {
        cout << "No one is handsome";
    }
    cout << '\n';
}