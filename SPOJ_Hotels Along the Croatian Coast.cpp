#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, i, l, r, sum, ans;
    l = r = sum = ans = 0;

    cin >> n >> m;
    int a[n+7];
    for(i = 0; i < n; i++) cin >> a[i];

    while(l < n){
        while(sum+a[r]<=m && r<n){
            sum += a[r];
            r++;
        }

        ans = max(ans, sum);
        sum -= a[l];
        l++;
    }
    cout << ans << endl;
    return 0;
}
