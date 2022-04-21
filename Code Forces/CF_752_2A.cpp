#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a;
    cin >> t;
    while(t--){
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            cin >> a;
            ans = max(ans, a - i);
        }
        cout << ans << "\n";
    }
}
