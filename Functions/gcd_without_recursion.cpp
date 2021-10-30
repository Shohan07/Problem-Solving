#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c, d, flag = 0;
    scanf("%d %d",&c, &d);
    int a = min(c,d);
    int b = max(c,d);
    int divisor = a;
    int dividend = b;

    while (1){
            if(divisor == 0){
                divisor = dividend;
                break;
            }
          int rem = dividend % divisor;
          if(rem == 0){
            break;
          }
          dividend = divisor;
          divisor = rem;
    }

    printf("%d",divisor) ;
}
