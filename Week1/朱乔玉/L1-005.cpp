#include <bits/stdc++.h>
using namespace std;

struct info{
    string id;
    int num1;
    int num2;
};

int main(){
    int n;
    cin >> n;
    vector<info> infos(n);
    for(int i = 0; i < n; i++){
        cin >> infos[i].id >> infos[i].num1 >> infos[i].num2;
    }
    int m;
    cin >> m;
    while(m--){
        int num;
        cin >> num;
        for(int i = 0; i < n; i++){
            if(num == infos[i].num1){
                cout << infos[i].id << ' ' << infos[i].num2 << endl;
            }
        }
    }
    return 0;
}