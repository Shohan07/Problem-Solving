#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t, n, i, j, ans, x;
    string s;
    cin >> t;
    for(i = 1; i <= t; i++){
        cin >> n;
        cout << "Case " << i << ":" <<endl;
        ans = 0;
        for(j = 0; j < n; j++){
            cin >> s;
            if(s == "donate"){
                cin >> x;
                ans += x;
            }
            else{
                cout << ans <<endl;
            }
        }

    }
    return 0;
}
