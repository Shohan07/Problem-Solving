#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, c, v, mi, mxc, mxv, miv, mic;
    string s;
    int arr[27];
    cin >> t;
    for(int i = 1; i <= t; i++){

        memset(arr, 0, sizeof(arr));
        cin >> s;
        int l = s.length();
        int mx = -1;
        c = v = 0;
        mxc = mxv = 0;
        for(int j = 0; j < l; j++){
            arr[s[j] - 'A']++;

            if(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'){
                v++;
                if(arr[s[j] - 'A'] > mxv){
                mxv = arr[s[j] - 'A'];
                miv = s[j] - 'A';
            }
            }
            else {
                c++;
                if(arr[s[j] - 'A'] > mxc){
                mxc = arr[s[j] - 'A'];
                mic = s[j] - 'A';
            }
            }

        }
         cout << "Case #" << i << ": ";
        if(mxc == l || mxv == l){
            cout << 0 << "\n";
            continue;
        }
        int costv = c + ((v-mxv)*2);
        int costc = v + ((c-mxc)*2);
       // cout << c << " " << v << " " << mxc << " " << mxv  << "\n";
        cout << min(costv, costc) << "\n";
    }
}
