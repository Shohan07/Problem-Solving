#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int inconv(vector<pair<long long, long long>>r, int m)
{
    sort(r.begin(), r.end(), sortbysec);
    int c = 0;
    for(int i = 1; i < m; i++){
        for(int j = 0; j < i; j++){
            if(r[j].first < r[i].first)c++;
        }
    }
    return c;
}

void solve()
{
    int n, m, x, c = 0;
    cin >> n >> m;
    vector<pair<long long, long long>> v;
    for(int i = 0; i < n*m; i++){
        cin >> x;
        v.push_back(make_pair(x, i));
    }
    sort(v.begin(), v.end());
    int i = 0;
    int j = m;
    for(int k = 0; k < n; k++){
        vector<pair<long long, long long>>r(v.begin()+i, v.begin()+j);
        c += inconv(r, m);
        i += m;
        j += m;
    }
    cout << c << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
