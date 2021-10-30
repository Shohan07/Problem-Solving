#include<bits/stdc++.h>
using namespace std;

int cntfive(int n)
{
    int cnt = 0;
    for(int i = 5; n/i >= 1; i *= 5){
        cnt += n/i;
    }
    return cnt;
}
int main()
{
    int t, n, c=1;
    cin >> t;

    while(t--){
        cin >> n;
        int l = 0, r = 1e9+1, mid, ans=-1;
        while(l<=r){
            mid = l+(r-l)/2;

            if(cntfive(mid)<n) l = mid+1;
            else {
                ans = mid;
                r = mid-1;
            }
        }
        cout << n << " "<< cntfive(ans) << "\n";
        if(cntfive(ans)==n)cout <<  "Case " << c << ": " << ans << "\n";
        else  cout << "Case " << c << ": " << ans << "\n";
        c++;
    }
}
