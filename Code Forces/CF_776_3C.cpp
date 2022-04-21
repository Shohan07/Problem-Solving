#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t, n, m, sum;

    cin >> t;
    while(t--){
        cin >> n >> m;

        vector<pair<int, pair<int, int>>> vp(m);

        for(auto &[a, b] : vp){
            cin >> b.first >> a;
        }
        for(int i = 0; i < m; i++){
            vp[i].second.second = i+1;
        }
        sort(vp.begin(), vp.end());
        vector<pair <int, int>> ans;

        long long int val = 0;

        for(auto &[a, b] : vp)
        {
            ans.push_back({b.first, b.second});
            val += a;
            if(ans.size() == 2 *n) break;
        }
        sort(ans.begin(), ans.end());

        cout << val << "\n";
        for(int i = 0, j = 2 * n - 1; i < n; i++, j--){
            cout << ans[i].second << " " ans[j].second << "\n";
        }
    }
    return 0;
}
