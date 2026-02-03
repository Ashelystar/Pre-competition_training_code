#include <iostream>
#include <string>
using namespace std;

struct info{
    string passNo;
    int testNo;
    int examNo;
};

int main(){
    // 记录
    int n;    cin >> n;
    info a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].passNo >> a[i].testNo >> a[i].examNo;
    }
    // 查找
    int m;    cin >> m;
    for (int i = 0; i < m; i++){
        int testNo;    cin >> testNo;
        // 查找考生信息
        for (int j = 0; j < n; j++){
            if(testNo == a[j].testNo){
                cout << a[j].passNo << " " << a[j].examNo << endl;
                break;
            }
        }
    }
}
