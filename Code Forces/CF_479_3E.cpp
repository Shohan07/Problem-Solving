#include <bits/stdc++.h>

using namespace std;

vector<int>G[200005];
int gr[200005];
int viz[200005];
int ok;

void dfs(int node) {
  if (gr[node] != 2)
    ok = 0;
  viz[node] = 1;
  for (auto it:G[node])
    if (!viz[it])
      dfs(it);
}

int main() {


  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= m; ++i) {
    int u, v;
    scanf("%d%d", &u, &v);
    G[u].push_back(v);
    G[v].push_back(u);
    gr[u]++;
    gr[v]++;
  }
  int ans = 0;
  for (int i = 1; i <= n; ++i)
  if (!viz[i]) {
    ok = 1;
    dfs(i);
    ans += ok;
  }
  printf("%d\n", ans);
  return 0;
}
