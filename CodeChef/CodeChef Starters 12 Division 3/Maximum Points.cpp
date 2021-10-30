#include<bits/stdc++.h>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}

int main()
{
    int t, a, b, c, x, y, z, tm;
    long long p;
    cin >> t;
    while(t--){
        tm = 240;
        p = 0;
        cin >> a >> b >> c;
        cin >> x >> y >> z;
        vector< pair <int, int> > v;
        v.push_back(make_pair(a, x));
        v.push_back(make_pair(b, y));
        v.push_back(make_pair(c, z));

        sort(v.begin(), v.end(), sortbysecdesc);


        tm -= (v[0].first * 20);
        p += (v[0].second * 20);
        cout << (p) << "\n";
        int k = tm / v[1].first;
        if(k > 20) k = 20;
        tm -= (v[1].first * k);
        p += (v[1].second * k);
        cout << p << "\n";
         k = tm / v[1].first;
        if(k > 20) k = 20;
         tm -= (v[2].first * k);
        p += (v[2].second * k);

        cout << p << "\n";
        v.clear();
    }
}
