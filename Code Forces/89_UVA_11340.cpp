
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, m, l;
    char c;
    string s;
    double v, total;
    map < char, double>mp;

    cin >> t;
    while(t--){
        total = 0;
        cin >> k;
        for(int i = 0; i < k; i++){
            cin >> c >> v;
            mp[c] = v;
        }
        cin >> m;
        cin.ignore();
        for(int i = 0; i < m; i++){
            s = "";
            getline(cin, s);
            l = s.size();
            for(int j = 0; j < l; j++){
               auto it = mp.find(s[j]);
                if(it != mp.end()){
                    total += it->second;
                }
            }
        }
      total /= 100;
      printf("%0.2lf$\n", total);
      mp.clear();
    }
    return 0;
}
