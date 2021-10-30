
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, n, cnt, p, c;
    string s;
    cin >> t;
    for(int k = 1; k <= t; k++){
        p = 0, c = 0;
        cnt = 0;
        cin >> n;
        cin >> s;
        int l = n;
        for(int i = 0; i < l; i++){
            if(s[i] == 'X'){
                c = 1;
                if(p == 0) p = c;
                else if(p != c){
                    cnt++;
                }
            }
            else if(s[i] == 'O'){
                c = 2;
                if(p == 0) p = c;
                else if(p != c){
                    cnt++;
                }
            }
            p = c;
        }
        cout << "Case #" << k << ": " << cnt << "\n";
    }
}
