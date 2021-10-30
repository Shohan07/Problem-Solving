#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t-- > 0){
        long long n, i, j, k,l, ara[107];
        cin >> n >> k;
        for(i = 0; i < n; i++){
            cin >> ara[i];
        }
        for(i = 0; i < k-1; i++){
            j = 0;
            while(1){
            if(j==n) break;

            if(ara[j] >= ara[j+1]){
                j++;
            }
            else{
                ara[j]++;
                break;
            }
            }
           for( l = 0; l < n; l++) cout << ara[l] << " ";
        cout << "\n";
        }

        if(j<n) cout << j+1 << "\n";
        else cout << -1 << "\n";
    }
}
