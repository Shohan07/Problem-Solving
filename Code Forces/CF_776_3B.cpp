
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, l, r, a, ans, x;
    cin >> t;

    while(t--){
        cin >> l >> r >> a;

        ans = r / a + r % a;
        x = r / a * a - 1;

        if(x >= l) ans = max(ans, x / a + x % a);

        cout << ans << "\n";

    }

    return 0;

}
