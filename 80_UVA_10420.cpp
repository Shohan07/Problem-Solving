#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    map<string, int>mp;
    string c, n;
    cin >> t;

    while(t--){
        cin >> c;

        getline(cin, n);

        mp[c]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second<< "\n";
    }
    return 0;
}
