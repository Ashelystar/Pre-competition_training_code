#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 0x3f3f3f3f;

int main() {
    int N, M, S, D;
    cin >> N >> M >> S >> D;
    
    vector<int> cityTeams(N);
    for (int i = 0; i < N; i++) {
        cin >> cityTeams[i];
    }
    

    vector<vector<int>> graph(N, vector<int>(N, INF));
    for (int i = 0; i < M; i++) {
        int c1, c2, length;
        cin >> c1 >> c2 >> length;
        graph[c1][c2] = length;
        graph[c2][c1] = length;
    }
    
    vector<int> dist(N, INF);      
    vector<int> teams(N, 0);       
    vector<int> num(N, 0);         
    vector<bool> visited(N, false);
    vector<int> pre(N, -1);        
    

    dist[S] = 0;
    teams[S] = cityTeams[S];
    num[S] = 1;
    
    for (int i = 0; i < N; i++) {

        int u = -1;
        int minDist = INF;
        for (int j = 0; j < N; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }
        
        if (u == -1) break;
        visited[u] = true;

        for (int v = 0; v < N; v++) {
            if (!visited[v] && graph[u][v] != INF) {
                int newDist = dist[u] + graph[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    teams[v] = teams[u] + cityTeams[v];
                    num[v] = num[u];
                    pre[v] = u;
                } else if (newDist == dist[v]) {
                    num[v] += num[u]; 
                    if (teams[u] + cityTeams[v] > teams[v]) {
                        teams[v] = teams[u] + cityTeams[v];
                        pre[v] = u;
                    }
                }
            }
        }
    }
    

    cout << num[D] << " " << teams[D] << endl;
    

    vector<int> path;
    int cur = D;
    while (cur != -1) {
        path.push_back(cur);
        cur = pre[cur];
    }
    

    for (int i = path.size() - 1; i >= 0; i--) {
        if (i != path.size() - 1) cout << " ";
        cout << path[i];
    }
    cout << endl;
    
    return 0;
}