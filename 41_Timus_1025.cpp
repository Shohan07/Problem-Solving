#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;

    while(scanf("%d", &k) != EOF){
        int a[102];

        for(int i = 0; i < k; i++)
        {
            scanf("%d",&a[i]);
        }

        sort(a, a+k);

        k++;
        int ans = 0;
        for(int i = 0; i < k/2; i++){
            ans += (a[i] + 1) / 2;
        }
        printf("%d\n",ans);
    }
    return 0;
}
