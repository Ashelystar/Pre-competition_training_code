#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    vector<int> arr;
    map<char, int> mp;
    vector<int> index;

    int idx = 0;
    for (char c = '9'; c >= '0'; --c) {
        if (str.find(c) != string::npos) {
            arr.push_back(c - '0');
            mp[c] = idx;
            idx++;
        }
    }

    for (auto c : str) {
        index.push_back(mp[c]);
    }

    cout << "int[] arr = new int[]{";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i == arr.size() - 1 ? '}' : ',');
    }
    cout << ';' << '\n';

    cout << "int[] index = new int[]{";
    for (size_t i = 0; i < index.size(); i++) {
        cout << index[i] << (i == index.size() - 1 ? '}' : ',');
    }
    cout << ';' << '\n';
}