#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;
        if(m < n-1)cout << "NO\n";
        else if(m > (n*(n-1))/2)cout << "NO\n";
        else if(k <= 1)cout << "NO\n";
        else if(k == 2){
            if(n == 1)cout << "YES\n";
            else cout << "NO\n";
        }
        else if(k == 3){
            if(m == (n*(n-1))/2)cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "YES\n";
    }
}
