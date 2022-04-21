#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t, x, n, ci;
    cin >> t;
    while(t--){
        cin >> x >> n;
        ci = 0;
        if(n > 20){
            ll r = n / 20;
            ci = r * 20;
        }

       //cout << ci << "\n";
        for(ll i = ci+1; i <= n; i++){
            if(x & 1) x += i;
            else x -= i;
          //  cout << i << " " << x << "\n";
        }
         cout << x << "\n";
    }
}
