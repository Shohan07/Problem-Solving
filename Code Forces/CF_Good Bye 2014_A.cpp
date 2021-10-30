
#include<bits/stdc++.h>
using namespace std;
#define MX 100007

vector< int > gr[MX];
bool vis[MX];

void dfs(int node){
    vis[node] = 1;
    for(int i = 0; i < gr[node].size(); i++){
        int next = gr[node][i];
        if(vis[next] == 0)
            dfs(next);
    }
}
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    for(int i = 1; i < n; i++){
        int a;
        scanf("%d", &a);

        gr[i].push_back(i+a);
    }
    dfs(1);

    if(vis[t] == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
