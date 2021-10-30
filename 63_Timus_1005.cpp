
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num[22], sum = 0, ans;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }
    ans = sum;
    for(int mask = 0; mask < (1<<n); mask++){
        int s = 0;
        for(int j = 0; j < n; ++j){
            if((1<<j)&mask) s += num[j];
            printf("%d %d\n", mask,s);
        }
        ans = min(ans, abs(sum-s*2));
    }
    printf("%d\n",ans);
    return 0;
}
