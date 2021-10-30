#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n;

    cin >> t;
    while(t-- > 0){
        cin >> n;

        if((n&(n-1)) == 0) cout << "NO\n";
        else cout << "YES\n";

    }
    return 0;
}
