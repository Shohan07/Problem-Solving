
#include<bits/stdc++.h>
using namespace std;

long long csum(long long n)
{
    return n*(n+1)/2;
}
int main()
{
    int t;
    cin >> t;

    while(t--){
        long long x, l=0, r=10000000000, ans=0, mv, sum;
        cin >> x;

        while(l<=r){
            mv = l+(r-l)/2;

            sum = csum(mv);

            if(sum<=x){
                ans = mv;
                l = mv+1;
            }
            else r = mv-1;
        }
        cout << ans << "\n";
    }
}
