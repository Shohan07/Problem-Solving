#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, s, mid, med;

    cin >> t;
    while(t--){
        cin >> n >> s;
        mid = (n+1)/2;
        med = n-mid+1;
        if(s < med) cout << 0 << "\n";
        else cout << s/med << "\n";
    }
}
