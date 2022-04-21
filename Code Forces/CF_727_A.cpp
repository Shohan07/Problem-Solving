#include<bits/stdc++.h>
using namespace std;
long long a, b;
bool found = 0;
vector<long long>v;

void dfs(long long node)
{
    if(found)return;
    if(node > b)return;

    v.push_back(node);
    if(node == b){
        found = 1;
        cout << "YES\n";
        cout << v.size() << "\n";
        for(auto i : v) cout << i << " ";

        return;
    }

    dfs(2*node);
    dfs(10*node+1);
    v.pop_back();

}

int main()
{
    cin >> a >> b;
    dfs(a);
    if(!found)cout << "NO\n";
}
