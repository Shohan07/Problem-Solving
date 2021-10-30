#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    ll ans=0, c;
    vector < ll > a;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    c = 1-n;
    for(ll i = 0; i < n; i++){
        ans += a[i]*c;
        c += 2;
    }
   cout << ans << '\n';
   return 0;
}
