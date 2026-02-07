#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

const int N = 505;

struct node{
    int id,dis;
    bool operator < (const node &x) const {
        return x.dis<dis;
    }
};
struct edge{
    int v,dis,next;
}e[N*N];
int n,m,s,d;
int a[N],dis[N],dp[N],pre[N],cnt,head[N],path[N];
bool vis[N];

void add_edge(int u,int v,int w){
    cnt++;
    e[cnt].v=v;
    e[cnt].dis=w;
    e[cnt].next=head[u];
    head[u]=cnt;
}

void djk(int st){
    memset(dis,0x3f,sizeof dis);
    dis[st]=0;
    dp[st]=a[st];
    path[st]=1;
    priority_queue<node> q;
    q.push({st,0});
    while(!q.empty()){
        node t=q.top();
        q.pop();
        int u=t.id;
        if(vis[u]) continue;
        vis[u]=1;

        for(int k=head[u];k;k=e[k].next){
            int v=e[k].v,w=e[k].dis;
            if(dis[u]+w<dis[v]){
                dis[v]=dis[u]+w;
                dp[v]=dp[u]+a[v];
                pre[v]=u;
                path[v]=path[u];
                q.push({v,dis[v]});
            }
            else if(dis[u]+w==dis[v]){
                if(dp[u]+a[v]>dp[v]){
                    dp[v]=dp[u]+a[v];
                    pre[v]=u;
                }
                path[v]+=path[u];
            }
        }
    }
}

void find_path(int u){
    if(u==s) {
        printf("%d ",u);
        return;
    }
    find_path(pre[u]);
    if(u!=d) printf("%d ",u);
    else printf("%d",u);
}

int main(){
    scanf("%d%d%d%d",&n,&m,&s,&d);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        add_edge(u,v,w);
        add_edge(v,u,w);
    }
    
    djk(s);

    printf("%d %d\n",path[d],dp[d]);

    find_path(d);

    return 0;
}