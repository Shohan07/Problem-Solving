#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, a, b, mx, sum;
    double ans;
    cin >> t;

    while(t--){
            sum =0;

        cin >> n;
        cin >> a;
        mx = a;
        sum += a;
        for(int i = 1; i < n; i++){
            cin >> a;
            if(a > mx)mx = a;
            sum += a;
        }
        sum -= mx;
        n--;
        ans = (((sum *1.0) / n) + mx);

        cout << fixed;
        cout << setprecision(9) << ans << "\n";


    }
}
