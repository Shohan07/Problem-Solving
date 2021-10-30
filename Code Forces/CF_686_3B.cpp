#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, n, a[200007], i, j;
    cin >> t;
    while(t--){
        cin >> n;
      int b[200007] = {0},  mn = 200009;
      bool f = false;
        for(i = 1; i <= n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        for(i = 1; i <= n; i++){
            if((b[a[i]] == 1) && (a[i]<mn)){
                mn = a[i];
                j = i;
                f = true;
            }
        }
        if(f) cout << j << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
