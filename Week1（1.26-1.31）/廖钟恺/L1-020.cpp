#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 存储出现在朋友圈中（K>1）的人的ID，这些人是有朋友的
    unordered_set<string> has_friend;
    int N;
    cin>>N;

    // 读取N个朋友圈的信息
    for(int i = 0; i < N; ++i){
        int K;  // 朋友圈中的人数
        cin>>K;
        
        // 读取当前朋友圈中的所有人ID
        vector<string> current_friends(K);
        for(int j = 0; j < K; ++j){
            cin>>current_friends[j];
        }
        
        // 如果朋友圈人数大于1，说明这些人互相是朋友，将他们加入"有朋友"集合
        if (K > 1) {
            for(const string& id : current_friends){
                has_friend.insert(id);
            }
        }
        // 如果K=1，说明这个人只在自己的朋友圈里，不算有朋友
    }

    // 读取查询人数M和所有待查询的ID
    int M;
    cin>>M;
    vector<string> queries(M);
    for(int i = 0; i < M; ++i){
        cin>>queries[i];
    }

    // 用于记录已输出的ID，避免重复输出
    unordered_set<string> outputted;
    bool first_output = true; // 标记是否为第一个输出的元素

    // 按照输入顺序遍历查询的ID
    for(const string& qid : queries){
        // 如果该ID不在"有朋友"集合中，且之前没有输出过，则输出
        if(has_friend.find(qid) == has_friend.end() && outputted.find(qid) == outputted.end()){
            if(!first_output){
                cout<<" ";  // 非第一个输出前添加空格
            }
            cout<<qid;
            outputted.insert(qid);  // 标记为已输出
            first_output = false;
        }
    }

    // 如果没有任何输出
    if(first_output){
        cout<<"No one is handsome";
    }

    return 0;
}