#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    double a;
    cin >> t;
    for(int i = 1; i <= t; i++){
       int cnt = 0;
        cin >> n;
        int ara[n];
        for(int j = 0; j < n; j++){
            cin >> ara[j];
        }
        a = ara[0] - 2;
        cnt = ceil(a/5.0);
        for(int j = 1; j < n; j++){
            a = ara[j] - ara[j-1];
            cnt += ceil(a/5.0);
        }
      cout<< "Case " << i << ": " << cnt <<endl;
    }
    return 0;
}

