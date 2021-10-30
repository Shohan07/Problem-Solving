#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t, n, d, i, j;
     cin >> t;
     while(t--){
        int a[1000] = {0};
        cin >> n >> d;
        d--;
        for(i = 1; i <= n; i++){
            cin >> a[i];
        }
        if(n == 1){
            cout << a[1]<< endl;
        }
        else{
            for(i = 2; i <= n; i++){

                if(a[i] > 0){
                    j = i-1;
                    if(d >= j){
                        int ans = d / j;
                        if(a[i]> ans)
                            ans = a[i]-ans;
                        else if(a[i]< ans)
                        {

                            ans =a[i];
                        }


                        a[1]+=ans;
                    }

                }
             d-=j
        }
         cout << a[1] << endl;
        }

     }
     return 0;
 }
