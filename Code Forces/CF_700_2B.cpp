#include<bits/stdc++.h>
using namespace std;
#define inp(n)               scanf("%d",&n)
pair<long long, long long> arr[1000007];
int main()
{
   int t;
   cin >> t;
   while(t--){
    long long  n, A, B, x, y, m, k, i;
    bool flag = true;
    cin >> A >> B >> n;

    for(i=0; i < n; i++ ) inp(arr[i].first);
    for(i=0; i < n; i++) inp(arr[i].second);
    sort(arr, arr+n);

    for(i = 0; i < n; i++){
        x = arr[i].first;
        y = arr[i].second;
        m = ((y+A-1)/A);
        k = (B+x-1)/x;
        if(m>k)flag = false;
        m = m*x;
        B = B-m;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
   }
}

