#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a[305];
    cin >> t;
    while(t--){
        int c = 0;
        cin >> n >> m;
        for(int i = 0; i < m; i++)cin >> a[i];
        for(int i = 1; i < m; i++){
            for(int j = 0; j < i; j++){
                if(a[j] < a[i])c++;
            }
        }
        cout << c << "\n";
    }
}
