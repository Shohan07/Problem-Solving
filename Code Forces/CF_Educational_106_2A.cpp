#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k1, k2, w, b;

    cin >> t;

    while(t--){
        cin >> n >> k1 >> k2;
        cin >> w >> b;

        int tw = k1+k2;
         n=n*2;
        int tb = n-tw;
        if((w*2<=tw) && (b*2<=tb))cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
