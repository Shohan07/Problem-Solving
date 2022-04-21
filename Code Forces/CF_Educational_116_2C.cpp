#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    vector< ll > p(10);
    p[0] = 1;
    for(int i = 1; i < 10; i++) p[i] = (p[i-1] * 10);

    while(t--){
        int n, k;
        cin >> n >> k;

        vector< ll > a(n);
        for(int i = 0; i < n; i++)cin >> a[i];

        ll s = 0;

        for(int i = 0; i < n; i++){
            if(k < 0) break;
            ll tk = k + 1;
            if( i != n-1){
               tk = min(tk, p[a[i + 1]] / p[a[i]] - 1);
            }
            k -= tk;
            s += tk * p[a[i]];
        }
        cout << s << "\n";

    }
}
