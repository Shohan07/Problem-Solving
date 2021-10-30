#include<bits/stdc++.h>
using namespace std;
bool checking(int x, int y)
{
    int sum = 0,i = 0, mod;
    while(y > 0){
        int mod = y % 10;
        sum += mod * pow(2, i++);
        y /= 10;
    }
    if(x!=sum) return false;
    return true;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1; i <= T; i++){
        int a, a1, b, b1, c, c1, d, d1;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&a1,&b1,&c1,&d1);
        if( checking(a, a1) && checking(b, b1) && checking(c, c1) && checking(d, d1))
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
