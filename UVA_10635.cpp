#include<bits/stdc++.h>
using namespace std;
#define mx 100000
int c = 1;
void solve()
{
    int n, a, p, q, dum[mx];
    memset(dum, 0, sizeof(dum));
    cin >> n >> p >> q;

    for(int i = 1; i <= p+1; i++){
        cin >> a;
        dum[a] = i;
    }
    multiset < int > lis;
    for(int i = 1; i <= q+1; i++){
        cin >> a;
        lis.insert(dum[a]);
        auto it = lis.upper_bound(dum[a]);
        if(it != lis.end())lis.erase(it);
    }
    cout << "Case " << c << ": "<< lis.size() << "\n";
    c++;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
