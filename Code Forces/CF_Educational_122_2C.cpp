#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, hc, dc, hm, dm, k, w, a, h, d, cs, ms;
    cin >> t;
    while(t--){
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;

        bool f = 0;

        for(int i = 0; i <= k ; i++){
            h = hc + i * a;
            d = dc + (k - i) * w;
            cs = (h + dm - 1) / dm;
            ms = (hm + d - 1) / d;
            if(ms <= cs){
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if(!f)cout << "NO\n";
    }
    return 0;
}
