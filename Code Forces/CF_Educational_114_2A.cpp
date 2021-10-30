
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, p, m;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> m;
        p = a/2 + b/2 + c/2;
        if(p >= m)cout << "YES\n";
        else cout << "NO\n";
    }
}
