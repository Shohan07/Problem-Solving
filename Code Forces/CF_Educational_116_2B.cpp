#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, cnt, t;
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n >> k;
        if( n == 1) cout << 0 << "\n";
        else if(k == 1) cout << n-1 << "\n";
        else if((n/2) <= k){
            ll p = 1;
            while(p < n){
                p <<= 1;
                cnt++;
            }
            cout << cnt << "\n";
        }
        else {
            ll p = 1;
            while(p < k*2){
                p <<= 1;
                cnt++;
            }
            cnt += (n + k - 1 - (k * 2)) / k;

            cout << cnt << "\n";
        }
    }

}
