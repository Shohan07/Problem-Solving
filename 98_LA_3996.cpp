#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, cnt[10], i;
    cin >> t;

    while(t--){
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
        for(i = 1; i <= n; i++){

            int temp = i;
            while(temp){
                cnt[temp % 10]++;
                temp /= 10;
            }
        }
        for(i = 0; i < 9; i++) cout << cnt[i] << " ";
        cout << cnt[9] << "\n";
    }
}
