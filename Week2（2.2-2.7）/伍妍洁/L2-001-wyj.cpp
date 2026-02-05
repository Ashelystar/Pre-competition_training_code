#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int findmin(vector<int> dis, int N, vector<int> visited, vector<int> totalpeople) {
	int minone = -1;
	int min = 0x3f3f3f3f;
	for (int i = 0; i < N; i++) {
		if (dis[i] <= min && !visited[i]) {
			if (dis[i] < min) {
				min = dis[i];
				minone = i;
			}
			else if (dis[i] == min && totalpeople[i] > totalpeople[minone]) {
				min = dis[i];
				minone = i;
			}
		}
	}
	return minone;
}
int main() {
	int N, M, S, D;
	cin >> N >> M >> S >> D;
	vector<vector<int>> adj(N, vector<int>(N, 0x3f3f3f3f));
	vector<int> people(N);
	vector<int> dis(N, 0x3f3f3f3f);
	vector<int> totalpeople(N, 0);//到这点最短距离最多的人数
	vector<int> path(N, -1);//路径，上个点
	vector<int> visited(N, 0);
	vector<int> mindispath(N, 0);//记录最短路径条数
	for (int i = 0; i < N; i++)
		cin >> people[i];
	int begin, end, length;
	while (M--) {
		cin >> begin >> end >> length;
		adj[begin][end] = length;
		adj[end][begin] = length;
	}
	//初始化
	dis[S] = 0;
	totalpeople[S] = people[S];
	mindispath[S] = 1;
	int pre = -1;
	for (int i = 0; i < N; i++) {
		int min = findmin(dis, N, visited, totalpeople);
		if (min == D)
			break;
		visited[min] = 1;
		for (int j = 0; j < N; j++) {
			if (dis[j] >= adj[min][j] + dis[min]) {
				//路径要改
				if (dis[j] > adj[min][j] + dis[min]) {
					mindispath[j] = mindispath[min];//最短路径条数计算
					path[j] = min;
					dis[j] = adj[min][j] + dis[min];
					totalpeople[j] = totalpeople[min] + people[j];
				}
				else {
					if (dis[j] == adj[min][j] + dis[min] && totalpeople[j] < totalpeople[min] + people[j]) {
						path[j] = min;
						totalpeople[j] = totalpeople[min] + people[j];
					}//else ：dis一样，totalpeople少，不用改路径
					mindispath[j] += mindispath[min];//最短路径条数计算
				}
			}
		}
	}
	cout << mindispath[D] << " " << totalpeople[D] << endl;
	stack<int> p;
	int e = D;
	p.push(D);
	while (e != S) {
		p.push(path[e]);
		e = path[e];
	}
	while (p.size()) {
		cout << p.top();
		p.pop();
		if (!p.empty())
			cout << " ";
	}
}