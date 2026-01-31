#include <iostream>

using namespace std;

// 求最大公约数
long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int N;
    cin >> N; // 输入分数的个数
    
    long long num1, num2, sum1 = 0, sum2 = 1;
    
    for(int i = 0; i < N; i++){
        char slash; // 用于读取 '/' 
        cin >> num1 >> slash >> num2; // 输入分数
        
        // 执行分数加法
        sum1 = sum1 * num2 + num1 * sum2; 
        sum2 = sum2 * num2;
        
        // 求最大公约数进行约分
        long long g = gcd(sum1, sum2);
        sum1 /= g;
        sum2 /= g;
    }
    
    if(sum2 == 1) cout << sum1; // 整数
    else if(sum1 / sum2 == 0) cout << sum1 << "/" << sum2; // 纯分数
    else cout << sum1 / sum2 << " " << sum1 % sum2 << "/" << sum2; // 整数分数混合
    cout << endl;
    return 0;
}
