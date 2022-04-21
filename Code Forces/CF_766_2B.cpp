#include<bits/stdc++.h>
using namespace std;
int calc(int i, int j, int r, int c)
{
    return abs(r-i) + abs(c-j);
}
int main()
{
    int t, n, m, i, j;
    cin >> t;
    while(t--){
        cin >> n >> m ;
        vector<int>v(n*m);
        for(int i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                int p = calc(i, j, 1, 1);

                int q = calc(i, j, 1, m);
                cout  << p << " " << q << "\n";
                int mx1 = max(p, q);
                cout << "mx1 " << mx1 << "\n";
                p = calc(i, j, n, 1);
                q = calc(i, j, n, m);

                int mx2 = max(p, q);
                int mx = max(mx1, mx2);
                v.push_back(mx);
                cout << mx1 << mx2 << "\n";
            }
        }
        sort(v.begin(), v.end());
        for(auto k : v){
            cout << k << " ";
        }
        cout << v[n*m-1] << "\n";
        v.clear();
    }
}
