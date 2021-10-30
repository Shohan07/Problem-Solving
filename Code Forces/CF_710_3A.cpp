#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, m, x, i, j, ans, r, d;

    cin >> t;
    while(t--){
        cin >> n >> m >> x;
        d = (x+n-1)/n;
        r = x%n;
        if(r==0) r=n;

        if(r>1){
            ans=m*(r-1)+d;
        }
        else ans = d;

        cout << ans << "\n";
    }
    return 0;
}
