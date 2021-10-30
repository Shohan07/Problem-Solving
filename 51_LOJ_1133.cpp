#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, r;
    long long int arr[1000], d, k;
    char choice;

     cin >> t;
     for(int i = 1; i <= t; i++){
        cin >> n >> m;
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }

        for(int j = 0; j < m; j++){
            cin >> choice;

            switch(choice){
            case 'S':
                cin >> d;
                for(int l = 0; l < n; l++){
                    arr[l] += d;
                }
                break;

            case 'M':
                cin >> d;
                for(int l = 0; l < n; l++){
                    arr[l] *= d;
                }
                break;

            case 'D':
                cin >> k;
                for(int l = 0; l < n; l++){
                    arr[l] /= k;
                }
                break;
            case 'R':
                for (int p = 0; p < n / 2; p++) {
                    swap(arr[p], arr[n - p - 1]);
                }
                break;

            case 'P':
                cin >> d>> k;
                swap (arr[d], arr[k]);
                break;
         }
        }

        cout<< "Case " << i << ":" << endl;
        for( r = 0; r < n; r++){
            cout << arr[r];

        if (r != n-1){
             cout << " ";

        }
        else {
            cout << endl;
        }
     }
     }
     return 0;
}
