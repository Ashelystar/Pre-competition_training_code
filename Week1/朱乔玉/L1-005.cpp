#include <bits/stdc++.h>
using namespace std;

struct info{
    string id; //准考证号
    int num1;  //试考座位
    int num2;  //考试座位
}; //每个学生的信息

int main(){
    int n;
    cin >> n;
    vector<info> infos(n);  //存储所有学生的信息
    for(int i = 0; i < n; i++){
        cin >> infos[i].id >> infos[i].num1 >> infos[i].num2;
    }
    int m;
    cin >> m;
    while(m--){
        int num; //查询的试考座位号
        cin >> num;
        for(int i = 0; i < n; i++){
            if(num == infos[i].num1){  //找到对应的学生
                cout << infos[i].id << ' ' << infos[i].num2 << endl;
            }
        }
    }
    return 0;
}