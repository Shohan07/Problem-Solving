#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, k, j, ans;
    cin >> t;
    while(t--){
        cin >> k;

        ans = 100 / __gcd(k,100);
        cout << ans << "\n";
    }
}
