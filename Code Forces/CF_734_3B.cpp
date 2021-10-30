#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int l = s.length();
        if(l == 1) cout << 0 << "\n";
        else{
            sort(s.begin(), s.end());
            int r = 0, g = 0, a[26], f = 1;
            memset(a, 0, sizeof(a));
           // for(int i = 0; i < 26; i++)cout << a[i] << " ";
            for(int i = 0; i < l; i++){
                if(a[s[i] - 'a']==2 ) continue;
                if(f==1 && (a[s[i] - 'a']==0 )){r++; f= 0; a[s[i] - 'a']++;}

                else if(f==0 && (a[s[i] - 'a']==0 )){g++; f= 1; a[s[i] - 'a']++;}

                else if(f==1 && (a[s[i] - 'a']==1 )){r++; f= 0; a[s[i] - 'a']++;}

                else if(f==0 && (a[s[i] - 'a']==1 )){g++; f= 1; a[s[i] - 'a']++;}
            }
            int ans = min(r, g);
            cout  << ans << "\n";
        }
    }
}
