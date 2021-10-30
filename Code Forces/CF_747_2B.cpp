#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
    ll n, k;
    cin >> n >> k;
    ll p = 1, ans = 0;
    ll mod = 1e9 + 7;
    for(int i = 0; i < 31; i++){
      if(k & (1<<i)){
        ans = (ans + p) % mod;
      }
      p *= n;
      p %= mod;
     // cout << p << "\n" ; 
    }
   cout << ans << "\n";

  }
}