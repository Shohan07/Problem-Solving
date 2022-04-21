
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;

    cin >> t;
    while(t--){
        cin >> n;
        vector < int > v(n);
        for(auto &a : v){
            cin >> a;
        }
        if(v.front() != n && v.back() != n){
            cout << -1 << '\n';
            continue;
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            cout << v[i] << (i < n-1 ? " " : "\n");
        }
    }
    return 0;
}
