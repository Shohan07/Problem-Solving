#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
#include<vector>
#define MAX_N 300010
using namespace std;
vector<pair<int,int> >G[MAX_N];
int dis1[MAX_N],dis2[MAX_N],vis[MAX_N];
int N;
void bfs(int s,int &t,int dis[])
{
    memset(vis,0,sizeof(vis));
    queue<int>Q;
    Q.push(s);
    vis[s] = 1;
    dis[s] = 0;
    int maxx = -1;
    while(!Q.empty())
    {
        int e = Q.front();
        Q.pop();
        int sz = G[e].size();
        for(int i = 0; i < sz; i++)
        {
            int v = G[e][i].first;
            int w = G[e][i].second;
            if(vis[v]) continue;
            dis[v] = dis[e] + w;
            if(dis[v] > maxx)
            {
                t = v;
                maxx = dis[v];
            }
            vis[v] = 1;
            Q.push(v);
        }
    }
    return ;
}
void Init()
{
    for(int i = 0; i < N; i++)
        G[i].clear();
}
int main()
{
    int T,cas,a,b,c;
    scanf("%d",&T);
    for(cas = 1; cas <= T; cas++)
    {
        scanf("%d",&N);
        Init();
        for(int i = 0; i < N-1; i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            G[a].push_back(make_pair(b,c));    // g[a][b] = c;
            G[b].push_back(make_pair(a,c));   //  g[b][a] = c;
       }
        int u,v,x;
        bfs(0,u,dis1);
        bfs(u,v,dis1);
        bfs(v,x,dis2);
        printf("Case %d:\n",cas);
        for(int i = 0; i < N; i++)
        {
            printf("%d\n",max(dis1[i],dis2[i]));
        }
    }
    return 0;
}
