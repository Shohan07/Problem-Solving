#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        if(n > s) cout << s << "\n";
        else {
            int ans = (n - (s-n));
            cout << ans << "\n";
        }
    }
}
