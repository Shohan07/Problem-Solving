
#include<bits/stdc++.h>

using namespace std;

int prime[30000], nprime, mark[100000];
void sieve(int n)
{
    int i, j, limit = sqrt(n*1.)+2;

    mark[1] = 1;
    for(i = 4; i <= n; i += 2)  mark[i] = 1;

    prime[nprime++] = 2;

    for(i = 3; i <= n; i += 2)
        if(!mark[i])
        {
            prime[nprime++] = i;

            if(i <= limit){
                for(j = i*i; j <= n; j += i*2){
                    mark[j] = 1;
                }
            }
        }
}

/*int main()
{
    int n = 100;
    sieve(100);
    printf("%d %d", nprime, mark[99]);
} */

