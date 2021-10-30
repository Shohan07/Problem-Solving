#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sr, i, a, d, j, k, ans;

    cin >> t;
    while(t-- > 0){
        cin >> n;
        sr=ans=0;

        for(i = 0; i < n; i++){
            cin >> a;
            sr += (a%3);
        }
        d = n/3;
         d = d*3;
         if(sr<d) ans = d-sr;

         else if(sr>d){
            d+=6;
            ans = d-sr;
         }
         else ans = 0;

         cout << ans << endl;
    }
    return 0;
}
