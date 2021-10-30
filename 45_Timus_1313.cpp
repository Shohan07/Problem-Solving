#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m[100][100], r, c;

    scanf("%d",&n);

    for(r = 1; r <= n; r++){
        for(c = 1; c <= n; c++){
            scanf("%d",&m[r][c]);
        }
    }

    printf("%d",m[1][1]);
    for(r = 2, c = 1; r <= n; r++){
        for(int r1 = r,  c1 = c; r1 >= 1; r1--, c1++){
            printf(" %d", m[r1][c1]);
        }
    }

    for ( int i = 2; i <= n; i++ ) {
            int r = n , c = i;
            while ( c <= n ) {
                printf (" %d", m [r] [c]);
                r--, c++;
            }
        }

    printf("\n");
    return 0;
}
//*r >= 1 &&
