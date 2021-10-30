#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, k, ans, l, r, d;

    cin >> t;

   while(t--){
    cin >> a >> b >> k;
    ans = 0;

    if(k&1){
        d = (k+1)/2;
        r =d * a;
        l = (d-1) * b;
        //cout << r << " " << l << endl;
        ans = r - l;

    }
    else {
        d = k/2;
        r = d * a;
        l = d * b;
        ans = r - l;
    }


    cout << ans << endl;
   }
    return 0;
}
