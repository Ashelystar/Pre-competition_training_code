#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin >> n >> c;
    // 打表
    int a[100] = {1}, k = 3;
    for (int i = 1; i < 100; i++){
        a[i] = a[i-1] + 2 * k;
        k += 2;
        // cout << a[i] << endl;
    }
    // 确定沙漏层数
    int i = 0;
    for (i; a[i] <= n; i++);
    i--;
    // cout << i << endl;

    // 开始打印
    for (int j = i; j >= 0; j--){
        for (int k = 0; k < i - j; k++) cout << " ";
        for (int k = 0; k < 2 * j + 1; k++) cout << c;
        cout << endl;
    }
    for (int j = 1; j <= i; j++){
        for (int k = 0; k < i - j; k++) cout << " ";
        for (int k = 0; k < 2 * j + 1; k++) cout << c;
        cout << endl;
    }
    cout << n-a[i] <<endl;
}
