#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i=1, n;

    while(scanf("%d", &n) == 1 && n){
        long long a, b, c, ans = 0;
        for(a = n/3; a >= 1; a--){
            b = a+1;
            c = b+1;
            if(a+b+c <= n){
                c--;
                ans += (n-a-b-c+1) / 2;
            }
        }
        printf("Case %d: %lld\n", i, ans);
        i++;
    }

}
