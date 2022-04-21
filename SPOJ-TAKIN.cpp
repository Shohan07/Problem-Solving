#include<bits/stdc++.h>
using namespace std;
long long t, n, m, i, mx;
vector<long long> v;

void subset(long long pos, long long cur)
{
    if(cur > m)return;
    else if(pos == v.size()){
        mx = max(mx, cur);
        return;
    }
    subset(pos + 1, cur);
    subset(pos + 1, cur + v[pos]);
}

int main()
{
    cin >> t;
    while(t--){
        v.clear();
        mx = 0;
        cin >> n >> m;
        for(int k = 0; k < n; k++){
            cin >> i;
            v.push_back(i);
        }
       subset(0, 0);
        cout << mx << "\n";
    }
}

