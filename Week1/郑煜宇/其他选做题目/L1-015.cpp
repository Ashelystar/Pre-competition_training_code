#include <iostream>
using namespace std;
int main(){
    int n;    cin >> n;
    char c;    cin >> c;
    // 行数为列数的50% （四舍五入取整）
    for (int i = 0; i < (n+1)/2; i++){
        for (int j = 0; j < n; j++){
            cout << c;
        }
        cout << endl;
    }
}
