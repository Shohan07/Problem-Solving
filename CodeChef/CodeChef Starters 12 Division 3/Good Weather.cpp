#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, s, r;

    cin >> t;
    while(t--){
        r = s = 0;
        for(int i = 0; i < 7; i++){
            cin >> a;
            if(a == 0)r++;
            else s++;
        }
        if(s > r)cout << "YES\n";
        else cout << "NO\n";
    }
}
