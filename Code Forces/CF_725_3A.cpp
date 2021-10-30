
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, a[105];
    cin >> t;
    while(t--){
        cin >> n;
        int s, b, ds = 0, db = 0;
        for(i = 1; i <= n ; i++){
            cin >> a[i];
            if(a[i] == 1)s = i;
            else if(a[i] == n)b = i;
        }
        ds = s, db = b;
       int ans1 =  max(ds, db);
       ds = n-s+1, db = n-b+1;
       int ans2 = max(ds, db);
       int ans = min(ans1, ans2);
       int mn = min(s, b);
      int mx = max(s, b);
       mx = n - mx + 1;
       if(mn+mx <= n){
        ans = min(ans, (mn+mx));
       }
       cout << ans << "\n";

}
}
