#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        map<long long , int> freq;

        vector<long long>a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        sort(a.begin() + 1, a.end());

        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(freq[a[i]] == 0)continue;
            if(freq[a[i] * x] != 0){
                freq[a[i]]--;
                freq[a[i] * x]--;
            }
            else{
                ans++;
                freq[a[i]]--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
