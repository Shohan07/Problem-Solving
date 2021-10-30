
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[5], mxp, mnp;
    cin >> t;
    while(t--){
        cin >> a[0] >> a[1] >> a[2] >> m;
        mxp = (a[0]+a[1]+a[2]-3);
        sort(a, a+3);
        mnp = (a[2] - (a[0]+a[1]+1));
        if(m <= mxp and mnp <= m)cout << "YES\n";
        else cout << "NO\n";
    }
}
