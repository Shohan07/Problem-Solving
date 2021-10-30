
#include<bits/stdc++.h>
using namespace std;
#define LL  long long

int main()
{
    int t;
    cin >> t;

    while(t-- > 0){
        LL n, x;
        cin >> n >> x;

        vector< pair < LL, LL> > v;
        LL a;

        for(LL i=0; i < n; i++){
            cin >> a;
            v.push_back({a, 1});
        }
        LL s, p, sum;
        s  = sum = 0;
        bool f = true;
        for(LL i = 0; i < v.size(); i++){
            sum += v[i].first*v[i].second;
            if(v[i].first % x)
               f = false;

            if(f){
                v.push_back({v[i].first/x, v[i].second*x});
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
