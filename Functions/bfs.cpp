#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
vector<int>gr[MAX + 5];
vector<bool>vis;
vector<int>dist;

void bfs(int root, int n)
{
    dist.clear();
    vis.clear();
    vis.resize(n + 1, 0);
    dist.resize(n + 1, INT_MAX / 2);
    queue<int>Q;
    Q.push(root);
    vis[root] = 1;
    dist[root] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int v : gr[u])
        {
            if(!vis[v])
            {
                vis[v] = 1;
                dist[v] = dist[u] + 1;
                Q.push(v);
            }
        }
    }
    cout << "shortest distance from root (" << root << ")\n";
    for(int i = 1; i <= n; i++)
    {
        cout << i << " : " << dist[i] << endl;
    }
}

int main()
{
    int n, m, root;
    cin >> n >> m >> root;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u); // disable it for directed graph
    }
    bfs(root, n);
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

#define MX 110

vector < int > graph[MX];
bool vis[MX];
int dist[MX];

void bfs(int source){
    queue < int > Q;
    // initialization
    vis[source] = 1;
    dist[source] = 0;
    Q.push(source);

    while(!Q.empty()){
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++){
            int next = graph[node][i];
            if (vis[next] == 0){
                vis[next] = 1; // visit
                dist[next] = dist[node] + 1; // update
                Q.push(next); // push to queue
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source;
    cin >> source;

    bfs(source);

    cout << "From node " << source << endl;
    for (int i = 1; i <= nodes; i++){
        cout << "Distance of " << i << " is : " << dist[i] << endl;
    }

    return 0;
}

/**
Sample input:
4 4 1
1 2
1 3
2 3
3 4
**/
