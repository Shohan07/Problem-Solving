#include<bits/stdc++.h>
using namespace std;
double arr[1000005];
int main()
{
    int t, n, b;


    for(int i = 1; i <= 1000000; i++){
        arr[i] = arr[i-1] + log(i);
    }
    scanf("%d", &t);
    for(int j = 1; j <= t; j++){
        scanf("%d %d", &n, &b);
        long long  ans = arr[n]/log(b) + 1;
        printf("Case %d: %lld\n",j, ans);
    }
    return 0;
}
