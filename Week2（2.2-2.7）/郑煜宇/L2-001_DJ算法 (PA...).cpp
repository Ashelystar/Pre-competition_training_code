// 首先读一下题目
/*
    城市上有救援队数量，城市之间由双向边连接
    任务是求出图中指定两点的所有最短路径，同时寻找其中最多救援队的路径
    考虑使用DJ算法（迪杰斯特拉算法，需要图中不存在负权重的边）
*/
/*
    DJ算法的作用是：求出一个顶点（假设为V0）到其他所有顶点的最短路径
    DJ算法的核心思想是：首先可以断定到一个顶点的最短路径，然后再依次确定 V0 到其他顶点的最短路径
        第一步， 统计从 V0 到其它顶点的权重， 其中假设V0-V2权重最小，那么V0-V2一定是到V2的最短路径之一
            // 假设存在一条比 V0->V2 权重更小的路径，比如用 V0->Vj -> ... ->V2 表示，那么 V0->Vj 的权值一定比 V0->V2 小，表格中权值最小的路径就应该选择 V0->Vj 而不是 V0->V2，但显然这种假设是不成立的。后续断定某个路径为最短路径时，也可以采用此方法验证。
        随后，从 V2 开始统计到其他顶点的权重，随后可以依次找到其余总权重最小的点并确定最短路径。
    为了实现这个算法，我们需要一些全局数组来存储算法需要的数据
*/
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define INF 16384

struct graph{
    int cityNum,arcNum;
    int* city;
    int** graph;
    int start,destination;
};

int* dist;              // 从起点到各点的最短距离
bool* visited;          // 是否已确定最短路径
int* rescueCount;       // 从起点到各点能召集的最大救援队数
int* pathCount;         // 最短路径的条数
int* pre;               // 前驱节点，用于记录路径

void initGraph(graph& d);
void DJ(const graph& d);
void print(const graph& d);
int main(){
    graph d;
    initGraph(d);
    DJ(d);
    print(d);
}

void initGraph(graph& d){
    int N,M,S,D;
    cin >> N >> M >> S >> D;
    d.cityNum = N;
    d.arcNum = M;
    d.start = S;
    d.destination = D;
    // 救援队数量
    d.city = new int[N];
    for (int i = 0; i < N; i++) cin >> d.city[i];
    // 初始化图,使用邻接矩阵 
    d.graph = new int*[N];
    for (int i = 0; i < N; i++){
        d.graph[i] = new int [N];
        for (int j = 0 ; j < N; j++){
        	d.graph[i][j] = (i == j) ? 0 : INF; // 
		} 
    }
    // 记录权重
    int start,end,weight;
    for (int i = 0; i < M; i++){
        cin >> start >> end >> weight;
        d.graph[start][end] = weight;
    }
    // 初始化全局数组
    dist = new int[N];
    visited = new bool[N];
    rescueCount = new int[N];
    pathCount = new int[N];
    pre = new int[N];
    
    for (int i = 0; i < N; i++) {
        dist[i] = INF;
        visited[i] = false;
        rescueCount[i] = 0;
        pathCount[i] = 0;
        pre[i] = -1;
    }
    
    // 起点初始化
    dist[S] = 0;
    rescueCount[S] = d.city[S];
    pathCount[S] = 1;
}

void DJ(const graph& d){
    int n = d.cityNum;
    int start = d.start;
    
    for (int i = 0; i < n; i++) {
        // 第一步，找到未访问中距离最小的点
        int u = -1, minDist = INF;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }
        
        if (u == -1) break;  // 剩余点不可达
        visited[u] = true;
        
        // 第二步，更新u的所有邻接点（可能有更短的路径） 
        for (int v = 0; v < n; v++) {
            if (visited[v] || d.graph[u][v] == INF) continue;
            
            int newDist = dist[u] + d.graph[u][v];
            int newRescue = rescueCount[u] + d.city[v];
            
            if (newDist < dist[v]) {
                // 发现更短路径
                dist[v] = newDist;
                rescueCount[v] = newRescue;
                pathCount[v] = pathCount[u];
                pre[v] = u;
            } else if (newDist == dist[v]) {
                // 距离相同，累加路径条数
                pathCount[v] += pathCount[u];
                // 选择救援队更多的路径
                if (newRescue > rescueCount[v]) {
                    rescueCount[v] = newRescue;
                    pre[v] = u;
                }
            }
        }
    }
}

void print(const graph& d){
    int end = d.destination;
    
    // 最短路径条数 和 最大救援队数量
    cout << pathCount[end] << " " << rescueCount[end] << endl;
    
    // 路径
    stack<int> path;
    int cur = end;
    while (cur != -1) {
        path.push(cur);
        cur = pre[cur];
    }
    
    bool first = true;
    while (!path.empty()) {
        if (!first) cout << " ";
        cout << path.top();
        path.pop();
        first = false;
    }
    cout << endl;
}

