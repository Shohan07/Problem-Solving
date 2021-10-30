
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if((a % 2) < (b % 2)) return true;
    return false;
}
int main()
{
    int t, n, a[2007], i, cnt, j ;
    cin >> t;

    while(t--){
            cnt = 0;
        cin >> n;
        for(i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n, cmp);

        for(i = 0; i < n-1; i++){
            for(j = i+1; j < n; j++){
                if(__gcd(a[i], 2*a[j]) > 1 )cnt++;
            }
        }
    cout << cnt << "\n";
    }

}
