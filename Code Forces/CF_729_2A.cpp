#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, od, ev;
    cin >> t;
    while(t--){
        cin >> n;
        od = ev = 0;
    for(int i = 0; i < 2*n; i++){
        cin >> a;
        if(a&1)od++;
        else ev++;
    }
    if(od == ev)cout << "Yes\n";
    else cout << "No\n";
    }
}
