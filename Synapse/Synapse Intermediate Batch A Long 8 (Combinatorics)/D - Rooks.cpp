#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n, k;
        cin >> n >> k;
        unsigned long long ans = 0;
        if(n*n >= k){
            ans = 1;
            for(int c = 1; c <= k; c++){
                ans = ans * n * n / c;
                n -= 1;
            }
        }
        cout << "Case " << i << ": " << ans << "\n";

    }
    return 0;
}
