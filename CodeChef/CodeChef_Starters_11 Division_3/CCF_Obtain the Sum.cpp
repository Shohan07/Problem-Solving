#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t, n, s, sum, ans;
    cin >> t;
    while(t--){
        cin >> n >> s;
        sum = (n* (n+1))/2;
        if(sum <s) cout << -1 << "\n";
        else cout << sum-s << "\n";
    }

}
