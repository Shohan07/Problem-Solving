
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;

        int lim = 1e9, f = 0;
        long long ans[n+5];
        ans[0] = 1;

        for(int i = 1; i < n; i++){
            ans[i] = ans[i - 1] * 3;
            if(ans[i] > lim){
                cout << "NO\n";
                f = 1;
                break;
            }
        }
        if(f) continue;
        cout << "YES\n";
        for(int i = 0; i < n; i++ ){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
