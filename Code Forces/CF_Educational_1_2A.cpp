
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n, sum2, sum, num = 1;
        cin >> n;
        sum = (n*(n+1)) / 2;
        while(num <= n){
            sum -= (num * 2);
            num *= 2;
        }
        cout << sum  << "\n";
    }
}
