#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t, n, i, j, lmt, x, y;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==2){
             cout << -1 << "\n";
              continue;
        }

        lmt = n*n;
        x = 1;
        y = 2;
        for(i = 1; i <= n; i++){
              for(j = 1; j <= n; j++){
                if(x <= lmt)cout << x << " ", x+=2;
                else if(y <= lmt)cout << y << " ", y+=2;
              }
              cout << "\n";
        }
    }
}
