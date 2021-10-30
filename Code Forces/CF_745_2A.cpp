#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        n += n;

        ll f = 1;
        for(int i = 3; i <= n; i++){
            f *= i;
            f %= mod;
        }
        cout << f << "\n";
    }
}
