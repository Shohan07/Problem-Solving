#include<bits/stdc++.h>
using namespace std;

map <int, int> mp;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int l, r;
        cin >> l >> r;
        mp[l] += 1;
        mp[r+1] -= 1;
    }
    int total = 0;
    for(auto p : mp){
        total += p.second;
        if(total > 2){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
