#include<bits/stdc++.h>
using namespace std;
char a[55][55];
int main()
{
    int t, n, m, r, c;
    cin >> t;
    while(t--){
        cin >> n >> m >> r >> c;
        bool fb = 0, fr = 0, fc = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
                if(a[i][j] == 66){
                    fb = 1;
                    if(r == i) fr = 1;
                    if(c == j) fc = 1;
                }

            }
        }
        //cout << a[r][c] << "\n\n";
        if(a[r][c] == 66)cout << 0 << "\n";
        else if(fr || fc) cout << 1 << "\n";
        else if(fb)cout << 2 << "\n";
        else cout << -1 << "\n";
    }
}
