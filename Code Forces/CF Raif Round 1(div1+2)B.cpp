#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, cnt;
    string s;

    cin >> t;

    while(t--){
        cin >> n;
        cin >> s;

        bool cw = false, acw = false;

        for(i = 0; i < n; i++){
            if(s[i] == '>'){
                cw = true;
            }
            else if( s[i] == '<'){
                acw = true;
            }
        }
        if(cw && acw){
            cnt = 0;
            for(i = 0; i < n-1; i++){

                if  ((s[i] == '-') || (s[i+1] == '-')) {
                    cnt++;
                }
            }

            if (s[n-1] == '-' || s[0] == '-') cnt++;
            cout << cnt << endl;
        }
        else{
            cout << n << endl;
        }

    }
    return 0;
}
