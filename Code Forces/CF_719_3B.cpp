#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long n, p, i, j, r=0;
    cin >> n;
    for(p = 1; p <= n; p = p*10+1){
        for(i = 1; i <=9; i++){
            if(p*i <= n) r++;
        }
    }
    cout << r << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
