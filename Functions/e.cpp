/* O(n)
I used KMP algorithm */

#include<bits/stdc++.h>
using namespace std;
vector<int> preprocess(string s){
        int n = s.length();
        vector<int> lps(n);
        for(int i = 1; i < n; i++){
            int j = lps[i-1];
            while(j > 0 && s[i] != s[j])
                j = lps[j-1];
            if(s[i] == s[j])
                j++;
            lps[i] = j;
        }
        return lps;
    }
int main()
{
    string x, p, k;
    cin >> x;
    int z;
    cin >> z;
    int t, a, m, n;
    while(z--){
        cin >> t;
        if(t == 1){
            cin >> a >> p;
            a--;
            x.replace(a, sizeof(p), p);
            //cout << x;
        }
        else{
            cin >> m >> n >> k;
            m--, n--;
            vector<int> lps = preprocess(k);
        int i = m, j = m, hl = x.length(), nl = k.length();
        int cnt = 0;
        while(m <= n){
            if(k[j] == x[i]){
                i++, j++;
            }
            if(j == nl)cnt++, j = 0, i++;
            else if(i < hl && k[j] != x[i]){
                if(j > 0) j = lps[j - 1];

                else i++;
            }
        }
         cout << cnt  << "\n";
        }
    }
}
