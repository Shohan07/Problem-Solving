#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k;
    set <int> st;
    cin >> t;

    for(k=1; k<=t; k++){
        cin >> n;
        int mx=0;
        int a[n+7], l[n+7], r[n+7];
        for(j=1; j<=n; j++){
            cin >> a[j];
            l[j]=j;
            while(l[j]>1 && a[j]<=a[l[j]-1])
                l[j] = l[l[j]-1];
        }
         for(i=n;i>=1;i--)
        {
            r[i]=i;
            while(r[i]<n&&a[i]<=a[r[i]+1])
            {
                r[i]=r[r[i]+1];
            }
        }

        for(i=1;i<=n;i++)
        {
            mx=max(a[i]*(r[i]-l[i]+1),mx);
        }
        cout << "Case " << k << ": " << mx << "\n";
    }
}
