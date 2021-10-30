#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, i, j;
    cin >> n;

    int arr[n][n];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

   int sl=0, sr=0, l=0, r=n-1;
    for(i = 0; i < n; i++){
        sl += arr[i][l];
        sr += arr[i][r];
        l++;
        r--;
    }
int  ans = abs(sl-sr);

    cout << ans << endl;
return 0;
}
