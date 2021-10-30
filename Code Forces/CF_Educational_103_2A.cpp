
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, k, ans ;

    cin >> t;
     while(t-- > 0){
        cin >> n >> k;
       if(k >= n){
        ans =  long (ceil(k*1.0/n));
       }
       else ans = 1 + (n%k != 0);
        cout << ans << "\n";

     }

    return 0;
}
