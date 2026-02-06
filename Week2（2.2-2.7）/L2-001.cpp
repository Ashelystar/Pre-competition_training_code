#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>
using namespace std;

// ijkstra算法

const int MAXN = 505;
const int INF = INT_MAX;

// pair<邻接城市,道路长度>
vector<pair<int,int>> graph[MAXN];
// 最短距离
vector<int> dist(MAXN,INF);
// 最短路径数
vector<int> cnt(MAXN,0);
// 最多救援队数
vector<int> rescue(MAXN,0);
// 前驱节点
vector<int> pre(MAXN,-1);
// 城市自身的救援队数量
vector<int> city_rescue(MAXN,0);
// 标记已处理
vector<bool> visited(MAXN,false); 

int main(){
    int N,M,S,D;
    cin>>N>>M>>S>>D;
    for(int i = 0; i < N; ++i){
        cin>>city_rescue[i];
    }

    // 输入道路信息，构建无向图
    for(int i = 0; i < M; ++i){
        int u,v,len;
        cin>>u>>v>>len;
        // 无向图，双向添加
        graph[u].emplace_back(v,len);
        graph[v].emplace_back(u,len);
    }
    // 初始化数
    // 起点到自身距离为0
    dist[S] = 0;
    // 起点到自身路径数为1
    cnt[S] = 1;
    // 起点的救援队数量
    rescue[S] = city_rescue[S];

    // 优先队列：pair<距离,城市编号>，小根堆
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
    pq.emplace(0,S);

    while(!pq.empty()){
        // 取出当前距离最短的节点
        auto [d,u] = pq.top();
        pq.pop();

        // 已处理，跳过
        if(visited[u]) continue;
        visited[u] = true;

        // 遍历u的邻接节点
        for(auto [v,len] : graph[u]){
            // 找到更短的路径
            if(dist[v] > d + len){
                dist[v] = d + len;
                cnt[v] = cnt[u]; // 路径数继承前驱
                rescue[v] = rescue[u] + city_rescue[v]; // 累加救援队
                pre[v] = u; // 记录前驱
                pq.emplace(dist[v],v);
            }
            // 路径长度相等
            else if(dist[v] == d + len){
                cnt[v] += cnt[u]; // 累加路径数
                // 如果当前路径的救援队更多，更新
                if(rescue[v] < rescue[u] + city_rescue[v]){
                    rescue[v] = rescue[u] + city_rescue[v];
                    pre[v] = u; // 更新前驱
                    pq.emplace(dist[v],v);
                }
            }
        }
    }

    // 输出最短路径数和最多救援队数
    cout<<cnt[D]<<" "<<rescue[D]<<endl;

    // 回溯路径：从D到S，再反转
    vector<int> path;
    for(int i = D; i != -1; i = pre[i]){
        path.push_back(i);
    }
    reverse(path.begin(),path.end());

    // 输出路径
    for(int i = 0; i < path.size(); i++){
        if(i > 0) cout<<" ";
        cout<<path[i];
    }
    return 0;
}