#include<bits/stdc++.h>
using namespace std;
const int sa = 2e5 + 10;
int t, n, m, a[sa], b[sa];
bool ans;

void check(int x){
    m = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] != x){
            b[++m] = a[i];
        }
    }
    for(int i = 1; i <= m; i++){
        if(b[i] != b[m - i + 1]){
            return;
        }
    }
    ans = true;
}

int main()
{
    cin >> t;
    while(t--){
          cin >> n, ans = true;
          for(int i = 1; i <= n; i++){
            cin >> a[i];
          }
          for(int i = 1; i <= n; i++){
            if(a[i] != a[n - i + 1]){
                ans = false;
                check(a[i]);
                check(a[n + 1 - i]);
                break;
            }
          }
          if(ans){
            cout << "YES\n";
          }
          else{
            cout << "NO\n";
          }
    }
}
