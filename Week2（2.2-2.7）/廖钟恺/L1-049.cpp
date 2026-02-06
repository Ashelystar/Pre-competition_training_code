#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> teams;  // 存储每所学校的学生总数
    
    // 读取每所学校有多少支队伍，并转换为学生总数
    while(N--){
        int num = 0;
        cin>>num;
        teams.push_back(num * 10);  // 每队10人，所以乘以10
    }
    
    int len = teams.size();  // 学校总数
    int count = 1;  // 当前座位号，从1开始
    int p = 0;  // 当前处理的学校索引
    vector<vector<int>> teammates(len);  // 存储每所学校每个学生的座位号
    int countSeat = 0;  // 已完成分配座位的学校数量
    
    // 分配座位的核心逻辑
    while(1){
        if(teams[p] != 0){  // 如果当前学校还有未分配座位的学生
            if(countSeat + 1 != len){  // 如果还有多于1所学校未完成分配
                // 正常情况：依次分配座位号
                teammates[p].push_back(count);  // 给当前学校的学生分配座位号
                count++;  // 座位号递增
                teams[p]--;  // 当前学校剩余未分配座位的学生数减1
                if(teams[p] == 0) countSeat++;  // 如果当前学校分配完毕，已分配学校数加1
            }
            else{  // 如果只剩1所学校未完成分配
                // 特殊情况：隔位就坐，即每隔一个座位安排一名学生
                teammates[p].push_back(count);  // 给当前学校的学生分配座位号
                count += 2;  // 隔一个座位
                teams[p]--;  // 当前学校剩余未分配座位的学生数减1
                if(teams[p] == 0) break;  // 如果当前学校分配完毕，跳出循环
            }
        }
        p = (p + 1) % len;
    }
    
    // 输出结果
    for(int i = 0; i < teammates.size(); i++){
        cout<<"#"<<i + 1<<endl;
        bool isFirst = true;
        int countTen = 0;  // 每10个学生换行
        for(int j = 0; j < teammates[i].size(); j++){
            if(isFirst){
                cout<<teammates[i][j];
                isFirst = !isFirst;
            }
            else cout<<" "<<teammates[i][j];
            countTen++;
            if(countTen == 10){
                countTen = 0;
                cout<<endl;
                isFirst = !isFirst;
            }
        }
    }
    return 0;
}
