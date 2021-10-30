#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, q, i, j, k, o, f, c;
    string s;

    cin >> t;
    while(t--){
            o = c = q = j =f= 0;
        cin >> s;
        int l = s.size();
        if(l % 2 ==  0 && s[0] != ')' && s.back() != '('){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
