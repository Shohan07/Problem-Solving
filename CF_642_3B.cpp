#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k , a[31], b[31], i, j, sum = 0;
    cin >> t;
    while(t--){
            sum = 0;
        cin >> n >> k;
        for(i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        for(i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());

        for(i = 0; i < k; i++){
            if(b[i] < a[i]){
                break;
            }
            else if(a[i] < b[i]){
                sum -= a[i];
                sum += b[i];
            }
        }
        cout << sum << endl;
    }
}
