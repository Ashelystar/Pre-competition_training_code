#include <bits/stdc++.h>

using namespace std;

using PII = pair<int, int>;
constexpr int INF = 1e9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, s, d;
    cin >> n >> m >> s >> d;

    vector<int> teams(n);
    for (auto& v : teams) {
        cin >> v;
    }

    vector grid(n, vector<PII> { });
    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        grid[u].emplace_back(v, w);
        grid[v].emplace_back(u, w);
    }

    vector dist(n, INF);
    vector score(n, 0);
    vector num(n, 0);
    vector pre(n, -1);

    priority_queue<PII, vector<PII>, greater<>> pq;

    dist[s] = 0;
    score[s] = teams[s];
    num[s] = 1;
    pq.emplace(0, s);

    while (!pq.empty()) {
        auto [sum, u] = pq.top();
        pq.pop();

        if (sum > dist[u]) continue;

        for (auto [v, w] : grid[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                num[v] = num[u];
                score[v] = score[u] + teams[v];
                pre[v] = u;
                pq.emplace(dist[v], v);
            } else if (dist[v] == dist[u] + w) {
                num[v] += num[u];
                if (score[v] < score[u] + teams[v]) {
                    score[v] = score[u] + teams[v];
                    pre[v] = u;
                }
            }
        }
    }

    cout << num[d] << " " << score[d] << "\n";

    vector<int> path;
    for (int curr = d; curr != -1; curr = pre[curr]) {
        path.push_back(curr);
    }
    ranges::reverse(path);

    for (int i = 0; i < path.size(); ++i)
        cout << path[i] << (i == path.size() - 1 ? "" : " ");
    cout << "\n";
}