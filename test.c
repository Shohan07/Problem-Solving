#include<stdio.h>
#include<math.h>

// input : 153
//output : 153
int main()
{
    int n,sum=0,count=0,temp=0,r,k=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r = n%10;
        n=n/10;
        count++;

    }

    printf("n= %d ,  %d\n",n,count);
    n=temp;
    while(n)
    {
        r=n%10;
        n = n/10;
        k= pow(r,count);
        sum = sum+k;

      //  printf("n= %d , r=%d ,sum= %d ,%d %d\n",n,r,sum,k,count);
    }
     printf("n= %d , sum = %d",n,sum);
}
