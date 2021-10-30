
#include<bits/stdc++.h>
using namespace std;

int n, m, x, h[100005];

void solve()
{
    cin >> n >> m >> x;
    cout << "YES\n";
    set<pair<int, int>>s;
    for(int i = 1; i <= m; i++){
        s.insert({0,i});
    }
      /* for(auto &it : s)
        {
             cout << it.first << " " << it.second << "\n";
        }cout<<"\n";*/
    for(int i = 0; i < n; i++){
        cin >> h[i];
        pair<int, int >p = *s.begin();

        s.erase(p);
       cout << p.second << " ";

        s.insert({p.first+h[i], p.second});

        /* for(auto &it : s)
        {
             cout << it.first << " " << it.second << "\n";
        }cout << "\n";*/

    }

    /*for(auto &it : s)
        {
             cout << it.first << " " << it.second << "\n";
        }*/
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
