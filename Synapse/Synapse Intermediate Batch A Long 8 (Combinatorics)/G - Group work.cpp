
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans;
    cin >> n;
    ans = 1;
    for(int i = 1; i <= n; i++){
            ans *= 2;
    }
    ans = ans - (n+1);
    cout << ans << "\n";

}
