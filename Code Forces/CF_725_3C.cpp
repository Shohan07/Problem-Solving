#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, l, r, i, j,  a;
    vector<int>v;

    cin >> t;
    while(t--){
        cin >> n >> l >> r;
        v.clear();
        for( i = 0; i < n; i++){
            cin >> a;
            v.push_back(a);
        }
         sort(v.begin(), v.end());
        long long ans = 0;
         for(i = 0; i < n; i++){
            ans += upper_bound(v.begin(), v.end(), r - v[i] ) - v.begin();
            ans -= lower_bound(v.begin(), v.end(), l - v[i] ) - v.begin();

            if(l <= 2 * v[i] && r >= 2 * v[i]) ans--;
         }
         cout << ans/2 << "\n";
    }
}
