#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, lc, i;
    string s;

    cin >> t;

    while(t--){
        cin >> s;
        l = s.length();
        vector<char>v;

        for(i = 0; i < l; i++){
            if((int)v.size() > 0){
                if(s[i] == 'B') v.pop_back();
                else v.push_back(s[i]);
            }
            else{
                v.push_back(s[i]);
            }
        }
        cout << (int)v.size() << endl;
    }

    return 0;
}
