#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
vector<int>gr[MAX + 5];
vector<bool>vis;

void dfs(int u)
{
    vis[u] = 1;
    cout << "curr node -> " << u << "\n";
    for(auto v : gr[u])
    {
        if(!vis[v])
             dfs(v);
    }
}

int main()
{
    int n, m, root;
    cin >> n >> m >> root;
    vis.resize(n + 1, 0);
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u); // disable it for directed graph
    }
    dfs(root);
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

vector <int> graph[5];
bool visited[5];

void dfs(int source){
    visited[source] = 1;
    for (int i = 0; i < graph[source].size(); i++){
        int next = graph[source][i];
        if (visited[next] == 0)
            dfs(next);
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(3);

    for (int i = 0; i < nodes; i++){
        if (visited[i] == 1){
            cout << "Node " << i << " is visited." << endl;

        }
        else{
            cout << "Node " << i << " is not visited" << endl;
        }
    }

    return 0;
}
/**
6 5 1
1 2
2 3
2 4
1 5
1 6
**/
