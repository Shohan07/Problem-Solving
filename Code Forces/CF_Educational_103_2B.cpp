#include<bits/stdc++.h>
using namespace std;
typedef long long li;

#define ll long long int
const int INF = int(1e9);

int main()
{
    int t;
     cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        ll ara[n+1];
        for(int i = 1; i <= n; i++) cin >> ara[i];
        ll need = 0;
        sum = ara[1];

        for(int i = 2; i <= n; i++){
            if((ara[i] * 100) <= (sum * k)){
                sum += ara[i];
                continue;
            }
            else{
                ll le = ara[i]*100;
                ll pip = (le / k)
            }
        }
    }
    return 0;
}
