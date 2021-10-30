#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, cnt1, cnt0;
    string s;
    cin >> t;

    while(t--){
        cin >> n;
        cin >> s;
        cnt1 = cnt0 = 0;
        for(i = 1; i < n; i++){
            if(s[i] == '1' && s[i-1] == '1'){
                cnt1++;
            }
            if(s[i] == '0' && s[i-1] == '0'){
                cnt0++;
            }
        }
        cout << max(cnt1, cnt0) << endl;
    }
    return 0;
}
