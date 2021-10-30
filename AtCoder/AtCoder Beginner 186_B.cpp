#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, mx, mn, i, j, d = 0;
    cin >> r >> c;
     int a[r+7][c+7];
     mx=-1;
     mn = 107;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cin >> a[i][j];
            if(a[i][j] < mn) mn = a[i][j];
            if(a[i][j] > mx) mx = a[i][j];
        }
    }
    if(mn == mx) cout << 0 << endl;
    else{
        for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(a[i][j] > mn){
              d += (a[i][j] - mn);
            }

        }
    }
    cout << d << endl;
    }
    return 0;
}
