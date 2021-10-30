
#include<bits/stdc++.h>
using namespace std;

#define LL     long long

int main()
{
    LL t, l, r, n, p, q, i, j;
    cin >> t;

    while(t--){
        vector<pair<LL,LL>> v;
        cin >> n;
        j = n;
        while(j--){
            cin >> l >> r;
            v.push_back({l,r});
        }
        sort(v.begin(), v.end());

        p = v.back().first;
        q = v.back().first;

        for(i = 0; i < n; i++){
            if(v[i].second < p){
                p = v[i].second;
            }
        }
        cout << q-p << "\n";
    }
    return 0;
}
