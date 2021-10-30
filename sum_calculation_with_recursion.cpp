#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    printf("%d\n",n);
    if(n<=1){
        return n;
    }

    return sum(n-1) + n;


    printf("\n%d\n",n);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("sum = %d",sum(n));
    return 0;
}
