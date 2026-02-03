#include <iostream>
#include <string>
using namespace std;

string s[10]={
    "ling", "yi", "er", "san", "si",
    "wu", "liu", "qi", "ba", "jiu"
};
int main(){
    string n;    cin >> n;
    int i = 0;
    // 处理负号
    if (n[0] == '-'){
        cout << "fu ";
        i++;
    }
    // 开始念数字
    for (i; i < n.size() - 1; i++){
        cout << s[n[i] - '0'] << " ";
    }
    cout << s[n[i] - '0'] << endl;
}
