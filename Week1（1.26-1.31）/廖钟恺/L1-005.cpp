#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    // 读取考生人数N
    int N;
    cin>>N;
    
    // 存储试机座位号到考生信息的映射，索引为试机座位号
    vector<vector<string>> info(N + 1);
    
    for(int i = 0; i < N; i++){
        string ID;         // 准考证号
        int computerSeat;  // 试机座位号
        string testSeat;   // 考试座位号
        
        // 读取考生信息
        cin>>ID>>computerSeat>>testSeat;
        
        // 将准考证号和考试座位号存储到对应试机座位号的位置
        info[computerSeat] = {ID,testSeat};
    }
    
    // 读取需要查询的试机座位号数量M
    int M;
    cin>>M;
    
    for(int i = 0; i < M; i++){
        int query;  // 待查询的试机座位号
        cin>>query;
        
        // 输出对应考生的准考证号和考试座位号
        cout<<info[query][0]<<" "<<info[query][1]<<endl;
    }
    
    return 0;
}