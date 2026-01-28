#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    int sum = 0;
    for(int i = a; i <= b; i++){
        cout << setw(5) << i;  // C++格式控制，输出占5个字符
        sum += i;
        cnt++;
        if(cnt == 5){
            cout << endl;
            cnt = 0;
        }
    }
    if(cnt != 0){   //当数字个数非5的倍数需要多输出一个换行
        cout << endl;
    }
    cout << "Sum = " << sum;
    return 0;
}