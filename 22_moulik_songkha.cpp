#include<bits/stdc++.h>
using namespace std;
#define s 100001
char ara[s];

void sieve()
{
    int i, j, root;
    for(i = 2; i < s; i++)
    {
        ara[i] = 1;
    }
    root = sqrt(s);
    for(i = 2; i <= root; i++)
    {
        if(ara[i] == 1)
        {
            for(j = 2; i*j <= s; j++){
                ara[i*j] = 0;
            }
        }
    }
}

int main()
{
    int T, a, b, c, i;
    sieve();
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&a, &b);
        c = 0;
        for(i = a; i <= b; i++){
            if(ara[i])
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
