
#include<bits/stdc++.h>
using namespace std;
long long dp[8000];
int main()
{

    int a[7] = {1, 5, 10, 25, 50};
    dp[0] = 1;
    for(int i = 0; i < 5; i++){
        for(int j = a[i]; j < 7500; j++){
            dp[j] += dp[j-a[i]];
            cout << "i =" << i << " j = " << j << " dp[j] = " << dp[j] << "\n";
        }
    }
    int n;
    while(cin >> n)cout << dp[n] << "\n";
}
