#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j,  n, c;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+7],  b=0, k =0;
         memset(a, 0, sizeof(a));
          bool f = 1;
          cin >> a[0]>>a[1]>>a[2];
          if(a[0]==a[1]){
            b=a[0];
            if(b != a[2]){
                f = 0;
                k = 3;
            }
          }
          else if(a[0]==a[2]){
            b=a[0];
            f = 0;
            c = a[1];
            k  = 2;
          }
          else {c = a[0]; k = 1; f =0;};

         for(i=3; i < n; i++){
            cin >> a[i];
            if((b != a[i]) && f==1){
                c = a[i];
                k=i+1;
                f = 0;
            }
         }
         cout << k << "\n";
    }

}
