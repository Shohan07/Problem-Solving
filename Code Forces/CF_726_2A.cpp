
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sum, i, j;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        for(i = 0; i < n; i++){
            cin >> j;
            sum += j;
        }
        if(sum < 0)cout << 1 << "\n";
        else {
            if(sum > n)cout << sum - n << "\n";
            else if(sum < n) cout << 1 << "\n";
            else cout << 0 << "\n";
        }

    }
}
