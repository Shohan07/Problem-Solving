#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j;
    cin >> t;
    while(t--){
        cin >> n >> m;
        set <int> r,c;

    int arr[n][m] ;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                r.insert(i), c.insert(j);
            }
        }
    }

    int mn = min(n - r.size(), m - c.size());

    if(mn%2){
        cout << "Ashish" << endl;
    }
    else{
        cout << "Vivek" << endl;
    }

    }
return 0;
}
