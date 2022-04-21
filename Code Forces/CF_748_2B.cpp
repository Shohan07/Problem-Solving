
#include<bits/stdc++.h>
using namespace std;
const int  INF = 100;
const string  subseq[] = { "00", "25", "50", "75" };

int solve (string &s, string &t)
{
    int len = s.length() - 1;

    int ans = 0;
    while(len >= 0 && s[len] != t[1]){
        len--;
        ans++;
    }
    if(len < 0) return INF;

    len--;

    while(len >= 0 && s[len] != t[0]){
        len--;
        ans++;
    }
    return len < 0 ? INF : ans;
 }

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int ans = 100;
        for(auto e : subseq){
            ans = min(ans, solve(s, e));
        }
        cout << ans << "\n";
    }
}
