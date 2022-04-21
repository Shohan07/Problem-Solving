
#include<bits/stdc++.h>
using namespace std;
#define mx 100000
int main()
{
    int t, n, a, dummy[mx + 5];

    cin >> t;
    while(t--){
        cin >> n;
        memset(dummy, 0, sizeof(dummy));
        for(int i = 1; i <= n; i++){
            cin >> a;
            dummy[a] = i;
        }
        multiset < int > lis;

        for(int i = 1; i <= n; i++){
            cin >> a;
            lis.insert(dummy[a]);
            auto it = lis.upper_bound(dummy[a]);
            if(it != lis.end()) lis.erase(it);
        }
        cout << lis.size() << "\n";
    }
    return 0;
}
