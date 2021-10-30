
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, xa, ya, xb, yb, xf, yf;
    cin >> t;
    while(t--){
       int ans = 0;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;

        if(xf==xa && xf == xb){
            int mx = max(ya,yb);
            int mn = min(ya, yb);
            if(yf>mn && mx>yf)ans+=2;
        }
        else if(yf==ya && yf == yb){
            int mx = max(xa,xb);
            int mn = min(xa, xb);
            if(xf>mn && mx>xf)ans+=2;
        }
        ans+= (abs(xa-xb));
        ans += (abs(ya-yb));
        cout << ans << "\n";
    }
}
