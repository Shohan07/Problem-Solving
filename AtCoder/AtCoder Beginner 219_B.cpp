#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string>mp;
    cin >> mp[0] >> mp[1] >> mp[2];
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1')cout << mp[0];
        else if(s[i] == '2')cout << mp[1];
        else cout << mp[2];
    }
cout << "\n";
}
