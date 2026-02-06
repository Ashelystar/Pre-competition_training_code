#include <iostream>
#include <string>

using namespace std;

int main() {
    int L, N;
    cin>>L>>N;
    // 计算总字符串数 26^L
    long long total = 1;
    for(int i = 0; i < L; ++i){
        total *= 26;
    }
    // 倒数转正数
    long long target = total - N;
    // 将target转换为L位26进制数，并存入字符串（逆序）
    string result;
    for(int i = 0; i < L; ++i){
        // 取当前最低位的26进制值
        int remainder = target % 26;
        result += (char)('a' + remainder);
        // 右移一位
        target /= 26;
    }
    reverse(result.begin(), result.end());
    cout<<result<<endl;
    return 0;
}