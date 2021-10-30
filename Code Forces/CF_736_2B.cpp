#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, cnt;

    cin >> t;

    while(t--){
        cin >> n;
        string a, b;

        cin >> a >> b;
        cnt = 0;

        for(i = 0; i < n; i++){
            if(b[i] == '0') continue;

            else if(a[i] == '0'){
                a[i] = '2';
                cnt++;
            }
            else if((i > 0) && (a[i-1] == '1')){
                a[i-1] = '2';
                cnt++;
            }
            else if((i < n) && (a[i+1]) == '1'){
                a[i+1] = '2';
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
