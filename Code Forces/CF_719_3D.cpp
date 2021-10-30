#include<bits/stdc++.h>
using namespace std;
#define Go_ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main()
{
    Go_
    ll t, n, m, i, j, aj, ans;
    map<ll, ll>mp;
    cin >>t;

    while(t--){
        mp.clear();
        cin >> n;
        ans=0;
        for(j=1; j <= n; j++){
            cin >> aj;
            m = aj-j;
            ans += mp[m];
            mp[m]++;
        }
        cout << ans << "\n";
    }
}
