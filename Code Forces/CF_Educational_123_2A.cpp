#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;

    map<char, int> mp;

    for(auto a : s){
        if(a >= 'a' && a <= 'z'){
            mp[a]++;
        }
        else{
            if(mp[a + 'a' - 'A'] == 0){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
