
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a,b,c,d,a1,b1,c1,d1,a2,b2,c2,d2;


    scanf("%d", &n);

    for(int i = 1; i <= n; i++){


        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        scanf("%d:%d %d:%d",&a1,&b1,&c1,&d1);

        a2 = a*60+b, b2 = c*60+d;
        c2 = a1*60+b1, d2 = c1*60+d1;
 printf( "Case %d: ", i);
        if(a2>d2 || c2>b2) printf("Hits Meeting\n");
        else printf("Mrs Meeting\n");

    }
}
