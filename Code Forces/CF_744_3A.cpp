#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    string s;

    cin >> t;
    while(t--){
        a = b = c = 0;
        cin >> s;
        int l = s.length();
        for(int i = 0; i < l; i++){
            if(s[i] == 'A')a++;
            else if(s[i] == 'B')b++;
            else c++;
        }
        if(a+c == b) cout << "YES\n";
        else cout << "NO\n";
    }
}
