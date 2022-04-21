#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum;
    string s1, s2;
    map < char, int >mp;
    cin >> t;

    while(t--){
        cin >> s1 >> s2;
        mp.clear();
        sum = 0;
        for(int i = 0; i < 26; i++){
            mp[s1[i]] = i+1;
        }
        for(int i = 1; i < s2.length(); i++){
            sum += abs(mp[s2[i]] - mp[s2[i-1]]);
        }
        cout << sum << "\n";
    }
}
