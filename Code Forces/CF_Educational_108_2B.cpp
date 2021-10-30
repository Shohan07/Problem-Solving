#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, m, k, a;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
       a = (m-1)+ ((n-1)*m) ;
       if(a==k)cout << "YES\n";
       else cout << "NO\n";
    }
}
