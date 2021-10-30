#include<bits/stdc++.h>
using namespace std;

long long func(long long n, long long k)
{
    if(k > n - k)k = n - k;

    long long ans = 1;
    for(int i = 0; i < k; i++){
        ans = ans * (n - i) / (i + 1);
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d", &t);
    long long n, k;

    while(t--){

        scanf("%lld %lld", &n, &k);

        printf("%lld\n", func(n-1, k-1));
    }
}
