#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
int N, M, S, D;
int weight[505], G[505][505];
int dist[505], cnt[505], maxTeam[505], pre[505];
bool vis[505];

int main() {
    cin >> N >> M >> S >> D;
    for (int i = 0; i < N; i++) cin >> weight[i];
    
    memset(G, 0x3f, sizeof(G));
    for (int i = 0; i < M; i++) {
        int u, v, l;
        cin >> u >> v >> l;
        G[u][v] = G[v][u] = l;
    }

    memset(dist, 0x3f, sizeof(dist));
    dist[S] = 0;
    cnt[S] = 1;
    maxTeam[S] = weight[S];

    for (int i = 0; i < N; i++) {
        int u = -1, minD = INF;
        for (int j = 0; j < N; j++) {
            if (!vis[j] && dist[j] < minD) {
                minD = dist[j];
                u = j;
            }
        }
        if (u == -1) break;
        vis[u] = true;

        for (int v = 0; v < N; v++) {
            if (!vis[v] && G[u][v] != INF) {
                if (dist[u] + G[u][v] < dist[v]) {
                    dist[v] = dist[u] + G[u][v];
                    cnt[v] = cnt[u];
                    maxTeam[v] = maxTeam[u] + weight[v];
                    pre[v] = u;
                } else if (dist[u] + G[u][v] == dist[v]) {
                    cnt[v] += cnt[u];
                    if (maxTeam[u] + weight[v] > maxTeam[v]) {
                        maxTeam[v] = maxTeam[u] + weight[v];
                        pre[v] = u;
                    }
                }
            }
        }
    }

    cout << cnt[D] << " " << maxTeam[D] << endl;

    vector<int> path;
    for (int i = D; i != S; i = pre[i]) path.push_back(i);
    path.push_back(S);
    
    for (int i = path.size() - 1; i >= 0; i--) {
        cout << path[i] << (i == 0 ? "" : " ");
    }
    cout << endl;

    return 0;
}
