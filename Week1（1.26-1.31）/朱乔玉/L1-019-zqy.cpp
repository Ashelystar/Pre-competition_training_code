#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;  // 甲乙酒量
    cin >> a >> b;
    int cnta = 0, cntb = 0;  //甲乙喝酒数
    int n;
    cin >> n;
    while(n--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        bool awin = (a1 + b1 == a2) ? false : true;  // 判断甲输赢
        bool bwin = (a1 + b1 == b2) ? false : true;  // 判断乙输赢
        if(awin == bwin){  // 同输同赢进入下一轮
            continue;
        }
        else{
            if(awin){  // 甲赢 乙喝酒数加一
                cntb++;
            }
            else{      // 乙赢 甲喝酒数加一
                cnta++;
            }
        }
        if(cnta > a){  // 甲喝酒数大于酒量，结束，甲先倒下
            cout << 'A' << endl << cntb;
            break;
        }
        else if(cntb > b){  // 乙喝酒数大于酒量，结束，乙先倒下
            cout << 'B' << endl << cnta;
            break;
        }
    }
    return 0;
}