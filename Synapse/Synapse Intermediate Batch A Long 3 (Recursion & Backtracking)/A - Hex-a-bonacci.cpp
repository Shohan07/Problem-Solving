#include<bits/stdc++.h>
using namespace std;
#define m 10000007

int a, b, c, d, e, f,dp[10007];
int fn(int n) {
    if (n == 0) return a%m;
    if (n == 1) return b%m;
    if (n == 2) return c%m;
    if (n == 3) return d%m;
    if (n == 4) return e%m;
    if (n == 5) return f%m;
    if(dp[n] != -1) return dp[n];
    dp[n] = fn(n-1)%m + fn(n-2)%m + fn(n-3)%m + fn(n-4)%m + fn(n-5)%m + fn(n-6)%m;
    return dp[n];
}
int main() {
    int n, t;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i) {
        memset(dp, -1, sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", i,(fn(n) + m) % m);
    }
    return 0;
}
