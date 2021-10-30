#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c0, c1, h, cnt0, cnt1, ans, ans1, ans2;
    string s;

    cin >> t;
    while(t--){
        cin >> n >> c0 >> c1 >> h;
        cin >> s;

        cnt0 = 0, cnt1 = 0, ans = 0, ans1 = 0, ans2 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') cnt0++;
            else cnt1++;
        }

        if(c0 == c1){
            cout << c0*n << endl;
        }
        else if(c0 > c1){
            if(c0 > h){
                ans1 = h*cnt0;
                ans1 += (n*c1);

                ans2 = (c0*cnt0) + (c1*cnt1);
                ans = min(ans1, ans2);
                cout << ans << endl;
            }
            else {
                ans = (c0*cnt0) + (c1*cnt1);
                cout << ans << endl;
            }
        }
        else{
            if(c1>h){
                ans1 = h*cnt1;
                ans1 += (n*c0);
                 ans2 = (c0*cnt0) + (c1*cnt1);
                ans = min(ans1, ans2);
                cout << ans << endl;
            }
             else {
                ans = (c0*cnt0) + (c1*cnt1);
                cout << ans << endl;
            }
        }
    }
    return 0;
}
