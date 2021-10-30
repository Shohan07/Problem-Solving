#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, a, b, cnt;
    string s, s2;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        s2 = s;
        cnt = 0;
        sort(s2.begin(), s2.end());
        for(i = 0; i < n; i++){
            a = int(s[i]-'a');
            b = int(s2[i]-'a');
            if(a != b)cnt++;
        }
        cout << cnt << "\n";
    }
}
