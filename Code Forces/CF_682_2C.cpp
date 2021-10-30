#include<bits/stdc++.h>
using namespace std;
long long int t, i, j, n, m;
 long long int a[105][105], b[105][105] = {0};

int main()
{

    cin >> t;

    while(t--){
        cin >> n >> m;

        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                cin >> a[i][j];
                }
            }

              for(i = 1; i <= n; i++){
                for(j = 1; j <= m; j++){
                    if( ((i+j) %2 == 1) && (a[i][j] % 2 == 1))a[i][j]++;
                    else if( ((i+j) %2 == 0) && (a[i][j] % 2 == 0)) a[i][j]++;
                }
              }

        for(i = 1; i <= n; i++){
                for(j = 1; j <= m; j++){
                    cout << a[i][j] << " ";

                }
                cout << endl;
            }
    }
    return 0;
}
