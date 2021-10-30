#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t, n, cnt;
    char c;
    cin >> t;
    while(t--){
        cin >> n >> c;
        string s;
        cin >> s;
        cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == c)cnt++;
            else break;
        }
        if(cnt == n)cout << 0 << "\n";
        else{
                bool f = 0;
                for(int i = 2; i <= n; i++){
                     int p = 0;
                    for(int j = i; j <= n; j += i){
                        if(s[j-1] != c)p++;
                    }
                    if(p == 0){
                        cout << 1 << "\n";
                        cout << i << "\n";
                        f = 1;
                        break;
                    }
                }

            if(!f){
               cout << 2 << "\n";
               cout << n << " " << n-1 << "\n";
            }
        }
    }
    return 0;
}
