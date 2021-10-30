#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, r, cnt, k ;
    while(cin >> n){
        cnt = n;
        if(!(n&1)) cnt++;

        while(n >= 3){
            d = n / 3;
            cnt += d;
            r = n % 3;
            n = r + d;
        }

        cout << cnt << "\n";
    }
}
