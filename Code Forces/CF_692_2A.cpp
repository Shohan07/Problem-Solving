#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, cnt, l, o;
    string s;
    cin >> t;

    while(t--){
        cin >> n;
        cin >> s;
        l = s.size();
        cnt = 0;
        for(i = l-1; i>-1; i--){
            if(s[i] == ')')cnt++;
            else {
                    break;}
        }
        o = l-cnt;
        if(cnt>o) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
