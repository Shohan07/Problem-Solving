#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, p , q,  i , j;
    cin >> t;
    for( i = 1; i <= t; i++){
        cin >> n >> p >> q;
        int ara[n], cnt = 0, sum = 0;
        for(j = 0; j < n; j++){
            cin >> ara[j];
            sum += ara[j];
            if(cnt < p && sum <= q){
                cnt++;
            }

        }
           cout<<"Case "<< i << ": "<< cnt <<endl;

    }
    return 0;
}
