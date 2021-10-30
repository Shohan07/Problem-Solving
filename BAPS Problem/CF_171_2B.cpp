#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i;

    cin >> n >> t;
    int r, l, ans, cnt, sum, a[n+7];
    for(i = 0; i < n; i++) cin >> a[i];

    r = l = ans = cnt = sum = 0;

  while(r<n){
    while(r<n && sum+a[r]<=t){
        sum += a[r];
        r++;
        cnt++;
    }
    ans = max(ans, cnt);
    cnt--;
    sum -= a[l];
    l++;

  }

    cout << ans << "\n";

 return 0;
}
