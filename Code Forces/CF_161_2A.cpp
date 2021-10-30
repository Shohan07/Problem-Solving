#include<bits/stdc++.h>
using namespace std;
int main()

{
    int i, j, k, l, ans, arr[5][5];

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1) k = i, l = j;
        }
    }
    ans = abs(2-k) + abs(2-l);
    cout << ans << endl;
    return 0;
}
