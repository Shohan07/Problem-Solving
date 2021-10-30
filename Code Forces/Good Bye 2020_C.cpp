#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int n, ans = 0;
    cin >> s;
    n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] == s[i-1] || s[i] == s[i-2])
        {
            s[i] = '-';
            ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
