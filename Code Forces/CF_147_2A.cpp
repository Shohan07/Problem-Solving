#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ch, cm, ph = -1, pm = -1, cnt = 1, ans = 1;


    cin >> n;
    while(n--){
        cin >> ch >> cm;
        if(ch == ph && cm == pm){
            cnt++;
            ans = max(cnt, ans);
        }
        else {
            cnt = 1;
        }
        ph = ch, pm = cm;
    }
    cout << ans << "\n";
}
