
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, sum, ans;

    cin >> t;

    while(t--){
            ans= 0;
        cin >> a >> b >> c;
        sum = a+b+c;
        if(sum % 9 == 0){
            int r = sum / 9;
            if(r <= min(a, min(b,c))){
                ans = 1;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
