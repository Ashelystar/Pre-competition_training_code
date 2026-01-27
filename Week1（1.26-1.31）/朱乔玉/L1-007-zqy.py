#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;  //string输入便于处理
    cin >> num;

    vector<string> nums = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    if(num[0] == '-'){
        cout << "fu ";
        for(int i = 1; i < num.size() - 1; i++){
            cout << nums[num[i]-'0'] << ' ';  // 输出对应数字的拼音
        }
        cout << nums[num[num.size()-1]-'0'];
    }
    else{
        for(int i = 0; i < num.size() - 1; i++){
            cout << nums[num[i]-'0'] << ' ';
        }
        cout << nums[num[num.size()-1]-'0'];
    }
    return 0;
}