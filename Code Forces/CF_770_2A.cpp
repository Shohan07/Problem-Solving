#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool isPal = 1;
    for(int i = 0; i < n; i++){
        if(s[i] != s[n - i - 1]){
            isPal = 0;
            break;
        }
    }
    if(isPal || !k) cout << 1 << "\n";
    else cout << 2 << "\n";
 }
   return 0;
}
