#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    set<string> has_friends; //存放有朋友的id,使用set去除重复的人
    while(n--){
        int k;
        cin >> k;
        if(k > 1){ // PS: K=1也属于没朋友
            for(int i = 0; i < k; i++){
                string s;
                cin >> s;
                has_friends.insert(s);
            }
        } 
        else{
            for(int i = 0; i < k; i++){
                string s;
                cin >> s;
            }
        }
    }
    int m;
    cin >> m;
    // used用来记录已经输出过的人，防止重复输出
    set<string> used;
    bool flag = false;
    while(m--){
        string s;
        cin >> s;
        // 在有朋友的列表里找不到他 && 之前没有输出过他
        if(has_friends.find(s) == has_friends.end() && used.find(s) == used.end()){
            // 格式控制：不是第一个输出的人，前面都要加空格
            if(flag) {
                cout << " ";
            }
            cout << s;
            used.insert(s); // 标记为已输出
            flag = true;    // 标记找到了至少一个帅哥
        }
    }
    // 如果flag依然是false，说明一个帅哥都没找到
    if(!flag){
        cout << "No one is handsome";
    }
    return 0;
}