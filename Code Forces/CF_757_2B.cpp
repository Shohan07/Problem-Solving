#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long>v(n);
    for(long long k = 0; k < n; k++){
        cin >> v[k];
    }
    vector<pair<long long, long long>> str;
    for(long long i = 0; i < n; i++){
        str.push_back({v[i], i});
       // cout << v[i]  << " " << i << "\n";
    }
    sort(str.begin(), str.end());
     reverse(str.begin(), str.end());
    vector<long long> ans(n);
    long long inc = 1;
    long long sum = 0;
    for(long long i = 0; i < n; i+= 2){
       // cout << str[i]. first << " " << str[i].second << "\n";
        sum += 2 * inc * str[i].first;
        ans[str[i].second] = inc;
        if(i + 1 < n){
            sum += 2 * inc * str[i+1].first;
            ans[str[i+1].second] = -inc;
        }
        inc++;
    }
    cout << sum << "\n";
    cout << 0 ;
    for(long long k = 0; k < n; k++){
       cout << " " <<  ans[k];
    }
    cout << "\n";
}

int main()
{
    long long t ;
    cin >> t;
    while(t--){
        solve();
    }
}
