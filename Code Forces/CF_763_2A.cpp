
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, rb, cb, rd, cd;
    cin >> t;
    while(t--){
        cin >> n >> m >> rb >> cb >> rd >> cd;
       int ans = min(rb <= rd ? rd - rb : 2 * n - rb - rd,
                  cb <= cd ? cd - cb : 2 * m - cb - cd);
        cout << ans << "\n";
    }
}
