#include <iostream>
#include <unordered_map> // map
using namespace std;

void print(unordered_map<int,int> m); // 寻找 出现次数最多 且 最大 的标签
int main(){
    int n;    cin >> n;
    // 统计标签数量
    unordered_map<int,int> m;
    for (int i = 0; i < n; i++){
        int k;    cin >> k;
        for (int j = 0; j < k; j++){
            int key;    cin >> key;
            m[key]++;
        }
    }
    //
    print(m);
}
void print(unordered_map<int,int> m){
    int maxCnt = 0, maxTag = 0;
    
    for (const auto& pair : m){
        int tag = pair.first;
        int cnt = pair.second;
        
        if (cnt > maxCnt\
                || (cnt == maxCnt && tag > maxTag)) {
            maxCnt = cnt;
            maxTag = tag;
        }
    }
    cout << maxTag << " " << maxCnt << endl;
}

