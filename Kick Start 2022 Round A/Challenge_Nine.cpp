
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, t, r, cnt0;
    cin >> t;
    for(int cas = 1; cas <= t; cas++){
        cin >> n;

        cout << "Case #" << cas << ": ";

        if(n == 9){
            cout << 99 << "\n";
            continue;
        }
        else if(n < 9){
            r = 9 - n;
            if(n < r){
                cout << n * 10 + 4 << "\n";
                continue;
            }
            else {
                cout << r * 10 + n << "\n";
                continue;
            }
        }
        else{
            ll d = n / 9;
            d++;
            d = 9 * d;
            r = d - n;
            ll cp = n;
            cnt0 = 1;
            ll f;
            while(cp){
                cnt0 *= 10;
                f = cp % 10;
                cp /= 10;
            }
            ll ans;
            if(f < r){
               ans =  n * 10 + r;
            }
            else
        }
    }
}
