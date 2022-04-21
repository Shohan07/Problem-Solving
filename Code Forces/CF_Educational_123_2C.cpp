#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n+5];

        for(int i = 0; i < n; i++)cin >> a[i];

        vector<int> v;
        int sum1 = 0;
        for(int i = 0; i < n; i++){
            sum1 += a[i];
            int mx = sum1;
            int sum = sum1;
            int k = 0;
            for(int j = i + 1; j < n; j++){
                sum += a[j];

            }
        }
    }
}
