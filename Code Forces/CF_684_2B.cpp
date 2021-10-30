#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i, j, s, t, n, k, ans, p, m, d, o;

    cin >> t;

    while(t--){
        cin >> n >> k;
        bool f = 0;
        p = 0;
        p = n*k;
        m = 0;

        if(n%2 == 0) m = n/2;
        else{
            m = n/2;
            m++;
        }
        j = 0;
        s = ((m-1)*k)+1;
        m--;
        o = n-m;
        ans = 0;
       for( i = 1; i <= p; i++){
            cin >> d;

            if(f){
                if(j == i){
                    ans+=d;
                    j = i+o;
                  //  cout << ans << " " << d << endl;
                }
            }
            else if(i == s){
                ans += d;
                f = 1;
                j = i+o;
               // cout << ans << " " << d << endl;
            }
        }

       cout << ans << endl;

    }
    return 0;
}
