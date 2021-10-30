#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, a, x, sum, r, mn, mx;

    cin >> t;
    while( t-- > 0){
        cin >> n >> x;
        mn = mx = r = 0;
        while(n-- > 0){
            cin >> a;
            mx += ceil(a*1.0/x);
            mn += a/x;
            r += a%x;
            if(r%x == 0){
                mn += r/x;
                r = 0;
            }
        }
        if(r != 0){
            mn += ceil(r*1.0/x);
        }
        cout << mn << " " << mx << "\n";
    }
    return 0;
}
