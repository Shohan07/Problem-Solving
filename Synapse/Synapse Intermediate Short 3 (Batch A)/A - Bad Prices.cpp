#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, a[150007], rm, cnt;
    cin >> t;
    while(t--){

        cin >> n;
        for(i=0; i < n; i++)cin >> a[i];
        rm = 1000007, cnt = 0;
        for(i=n-1; i >= 0; i--){
            if(a[i] > rm)cnt++;

            rm = min(a[i],rm);
        }
        cout << cnt << "\n";
    }
}
