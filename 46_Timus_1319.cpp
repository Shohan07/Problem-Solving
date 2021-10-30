#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[101][101], r, c;
    scanf("%d",&n);
    int num = 1;
    for(int i = n-1; i >= 0; i--){
       r = 0,
        c = i;
        while(r < n && c < n){
            arr[r][c] = num++;
            r++, c++;
        }
    }

    for(int i = 1; i < n; i++){
        r = i, c = 0;
        while(r < n){
            arr[r][c] = num++;
            r++, c++;
        }
    }

    for(int r = 0; r < n; r++){
            bool space = false;
        for(int c = 0 ; c < n; c++){
            if( space ) printf(" "); space = true;
            printf("%d", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}
