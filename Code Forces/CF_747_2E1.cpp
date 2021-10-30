
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll binpow(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    vector<ll> pow2(62, 1);
    for(int i = 1; i <= 62; i++)
    {
        pow2[i] = pow2[i - 1] * 2;
    }
    ll n;
    cin >> n;
    ll pw = pow2[n] - 2;
    ll ans = binpow(4,  pw);
    ans *= 6;
    cout << ans % mod << "\n";
}
