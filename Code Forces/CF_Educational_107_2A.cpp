#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, r, i, j, cnt;
    cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        for(i = 0; i < n; i++){
            cin >> r;
            if(r==1 || r==3)cnt++;
        }
        cout << cnt << "\n";
    }
}
