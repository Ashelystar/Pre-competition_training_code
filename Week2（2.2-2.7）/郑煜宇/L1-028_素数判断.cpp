// int: ~2^31
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a);
int main(){
    int n;    cin >> n;
    for (int i = 0; i < n; i++){
        int a;    cin >> a;
        if (isPrime(a)){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}
bool isPrime(int a){
    // 暴力法（如有时间要求，可以用埃式筛，不过需要申请大小 O(n) 的空间）
    if (a == 1) return false;	// 下面算法在a=1时是错误的... 
    int b = sqrt(a);
    for (int i = 2; i <= b; i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}
