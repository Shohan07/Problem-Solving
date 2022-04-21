#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, l, r, k, p, cnt;

    cin >> t;

    while(t--){
        cin >> n >> l >> r >> k;
        cnt = 0;
        vector<int>v;
        for(int i = 0; i < n; i++){
            cin >> p;
            if(p >= l && p <= r){
                v.push_back(p);

            }
        }
        sort(v.begin(), v.end());
        for(auto j : v){
            if(j > k)break;
            cnt++;
            k -= j;
        }
        cout << cnt << "\n";
    }
}
