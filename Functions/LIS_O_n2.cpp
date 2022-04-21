#include<bits/stdc++.h>
using namespace std;
#define mx 100000
int main()
{
    int n, a[mx + 5], lis[mx + 5], ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    lis[0] = 1;
    for(int i = 1; i < n; i++){
        lis[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j] && lis[i] < lis[j]+1){
                lis[i] = lis[j] + 1;
            }
        }
        ans = max(ans, lis[i]);
    }
    cout << ans << "\n";
}
