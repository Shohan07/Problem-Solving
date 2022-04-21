#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, i;
    string s;
    cin >> t;
    while(t--){
        bool f = 1;
        cin >> s;
        l = s.length();
        if(l&1) f = 0;
        else {
            int m = l / 2;
            for(i = 0, m; m < l; i++,m++){
                if(s[i] != s[m]){
                    f = 0;
                    break;
                }
            }
        }
        if(f)cout << "YES\n";
        else cout << "NO\n";
    }
}
