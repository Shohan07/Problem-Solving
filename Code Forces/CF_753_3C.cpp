#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, sum, a[100007], m = 1e10;
    cin >> t;
    while(t--){
        cin >> n ;
        vector< ll > a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll sum = a[0], ans = a[0];
        for(int i = 1; i < n; i++){
            a[i] -= sum;
            sum += a[i];
            ans = max(ans, a[i]);
        }
        cout << ans << "\n";

    }
}
