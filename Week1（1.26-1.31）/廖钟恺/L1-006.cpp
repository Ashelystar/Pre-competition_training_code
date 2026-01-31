#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int max_len = 0;  // 最长连续因子的长度
    int start = 0;    // 最长连续因子的起始数字

    // 遍历可能的起始因子
    for(int i = 2; i <= sqrt(N); ++i){
        long long temp = N;  // 临时变量，用于试除
        int j = i;           // 从i开始的连续因子
        int current_len = 0; // 当前连续因子的长度

        // 只要temp能被j整除，就继续往后找连续因子
        while(temp % j == 0){
            temp /= j;
            current_len++;
            j++;
        }

        // 更新最长连续因子信息：长度更长，或长度相同但起始数更小
        if(current_len > max_len){
            max_len = current_len;
            start = i;
        }
    }

    // 特殊情况：N是质数，最长连续因子就是它本身
    if(max_len == 0){
        max_len = 1;
        start = N;
    }

    cout<<max_len<<endl;
    for(int i = 0; i < max_len; ++i){
        if(i > 0) cout<<"*";
        cout<<start + i;
    }
    cout<<endl;

    return 0;
}