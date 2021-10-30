
#include<bits/stdc++.h>
using namespace std;

int N, L, R, c[200007], lcnt[200001],rcnt[200001];


void solve(){
    cin >> N >> L >> R;
    for(int i = 1; i <= N; i++){
        lcnt[i] = 0;
        rcnt[i] = 0;
    }
    for(int i = 1; i <= N; i++){
        cin >> c[i];
        if(i <= L) lcnt[c[i]]++;
        else rcnt[c[i]]++;
    }
    for(int i = 1; i <= N; i++){
        int mn = min(lcnt[i], rcnt[i]);
        lcnt[i] -= mn;
        rcnt[i] -= mn;
        L -= mn;
        R -= mn;
    }
    if(L < R){
        swap(lcnt, rcnt);
        swap(L,R);
    }
    int ans = 0;
    for(int i = 1; i <= N; i++){
        int extra = L-R;
        int canDo = lcnt[i] / 2;
        int Do = min(canDo*2, extra);
        ans += Do/2;
        L -= Do;

     }

        ans += (L-R)/2 + (L+R)/2;
        cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
