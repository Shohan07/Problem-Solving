#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, p;
    cin >> t;
    while(t--){
        cin >> n;
       vector<int> v(n+1, 0);
        bool f = 0;
        int ans = -1;
        for(i = 0; i < n; i++){
            cin >> p;
            v[p]++;
            if(f == 0 && v[p] == 3){
                   // cout << v[p] << " \n\n";
                ans = p;
                f = 1;
            }
        }
        cout << ans << "\n";
    }
}
