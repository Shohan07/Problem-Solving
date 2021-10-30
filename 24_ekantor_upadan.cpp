#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, ara[101];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(int j = 0; j < n; j+=2)
        {
            printf("%d ",ara[j]);
        }
        printf("\n");
    }
    return 0;
}
