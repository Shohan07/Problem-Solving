#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, l, k;
    string s;

    cin >> t;
    while(t--){
        cin >> s;
        l = s.length();
        bool f = 1;
        i = 0, j  = l-1, k = l;
        while(k--){
            int c = (96+l);
             //cout << c << "=c\n";
            l--;
            int si = int(s[i]);
            int sj = int(s[j]);
            //cout << sj << " \n";
            if(si==c){
                    i++;
                  //  cout << "i " << i << "\n";
            }

            else if(sj==c){
                    j--;
                  //  cout << "j " << j << "\n";
            }
            else{
                f = 0;
                break;
            }
        }
        if(f)cout << "YES\n";
        else cout << "NO\n";
    }
}
