#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, cnt, t, cur;
    cin >> t;
    while(t--){
        cnt = 0, cur = 1 ;
        cin >> n >> k;
        while(cur < n && cur < k){
            cur *= 2;
            cnt++;
        }
        if(cur > n) cout << cnt << "\n";
        else {
           cout <<  cnt + (n - cur + k - 1) / k << "\n";
        }
}
}
