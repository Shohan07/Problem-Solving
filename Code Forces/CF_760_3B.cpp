#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, i, j, mn;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> v(n);
        bool f = 1;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(i > 0){
                if(v[i] == v[i-1])f = 0;
            }
        }
    }
}
