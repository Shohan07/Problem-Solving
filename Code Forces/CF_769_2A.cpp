#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        if(n < 2)cout << "YES\n";
        else if(s[0] != s[1] && n == 2)cout << "YES\n";
        else cout << "NO\n";
    }
}
