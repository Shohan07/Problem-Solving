#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char ch;
        cin >> ch;
        bool f = false;
        for(int i = 0; i < s.size(); i += 2){

           if(s[i] == ch){
            f = true;
            break;
           }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}
