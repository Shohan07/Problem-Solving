#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt0, cnt1, l;
    string s;
    cin >> t;

    while(t--){
        cin >> s;
        cnt0 = cnt1 = 0;
        l = s.size();
        for(int i = 0; i < l; i++){
            if(s[i] == '0')cnt0++;
            else cnt1++;
        }
        if(cnt1 != cnt0){
            cout << min(cnt1, cnt0) << "\n";
        }
        else{
            if(l>2 && (cnt0 == cnt1)){
                cout << (cnt0 - 1) << "\n";
            }
            else cout << 0 << "\n";
        }
    }
}
