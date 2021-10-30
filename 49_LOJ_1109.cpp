#include<bits/stdc++.h>
using namespace std;

int ara[1001],k, cnt, j, tmp;

void square(int ara[])
{
    for(k=1; k<=32; k++)
        ara[k*k]=-1;
}

void devisor(int ara[])
{
    for(k=1; k<=1000; k++)
    {
        tmp = sqrt(k);
        for(j=1, cnt=0; j<=tmp; j++)
        {
            if(k%j==0)
                cnt++;
        }
        ara[k]+=(cnt*2);
    }
}

int main()

{
    int test, i, finl[1001], n;
    int m = 2; finl[1] = 1;

    square(ara);
    devisor(ara);

    for(i = 2; i <= 32; i++){

        for(j = 1000; j >= 2; j--){

            if(ara[j] == i){
                finl[m] = j;
                m++;
            }
        }
    }

    scanf("%d",&test);
    for(k = 1; k <= test; k++){
        scanf("%d", &n);
        printf("Case %d: %d\n", k, finl[n]);
    }
    return 0;

}
