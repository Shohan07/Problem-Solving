#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, h;

    scanf("%d",&t);
    while(t--){
        scanf("%d %d", &n, &h);
        int a[n+7];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        sort(a, a + n, greater<int>());
        int s = a[0] + a[1];

        int cnt = h / s;
        cnt *= 2;
        h %= s;

        if(h == 0) printf("%d\n", cnt);
        else if(h <= a[0]) printf("%d\n", cnt+1);
        else printf("%d\n", cnt+2);
    }

}
