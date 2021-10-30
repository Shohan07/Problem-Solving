
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n+5], b[n+5], c[n+5];
    bool f = 1;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i]< i) f = 0;
       // b[a[i]]++;
    }
    if(f){
         for(int i = 1; i <= n; i++){
                if(b[a[i]]==0){
                    cout << a[i] << " ";
                    b[a[i]]++;
                }
         }
         for(int i = 1; i <= n; i++){

      if(b[i]==0) cout << i << " ";
    }cout << endl;
    }
   else cout << -1 << endl;
}

int main()
{
    int t;

    cin >> t;
    while(t--){
        solve();
    }
}
