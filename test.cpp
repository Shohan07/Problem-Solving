#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
vector<int>gr[MAX+5];
vector<int>vis;

void dfs(int u){
    vis[u] = 1;

}

int main()
{
    int n, m, root;
    cin >> n >> m >> root;
    vis.resize(n+1, 0);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs(root);

}
