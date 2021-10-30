#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, q, p, a, b, i, j;
    vector<int>v;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> n >> q;
        for(j=0; j<n; j++){
            cin >> p;
            v.push_back(p);
        }

        cout << "Case " << i << ":\n";
        for(j=0; j<q; j++){
            cin >> a >> b;
            cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a)   << "\n";
        }

v.clear();
    }
    return 0;
}
