
#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n, tc, i, j, b, ans;

   cin >> tc;

    while(tc--){
             cin >> n;
            j = n;
         ans = 0;
     vector < pair < long long int , string > > v;
        string name;
        long long int pos;
        for(i = 0; i < n; i++){
        cin >> name >> pos;

        v.push_back(make_pair(pos, name));
    }

    sort(v.begin(), v.end());

    for(i = 0; i < n; i++){
        b = v[i].first - (i+1);
        ans = ans + abs(b);
    }
    cout << ans << endl;
    }
    return 0;
}
