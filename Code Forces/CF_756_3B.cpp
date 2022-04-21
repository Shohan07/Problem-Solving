#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,  c, d;

    cin >> t;

    while(t--){
        cin >> c >> d;
        cout << min((c+d)/4, min(c,d)) << "\n" ;
    }
}
